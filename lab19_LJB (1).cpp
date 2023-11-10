/////////////////////////////////////////////////////////////////////
//
// Name: Landon Burns
// Date: 5/2/2022
// Class: 1370.R04
// Semester: Spring 2022
// CSCI 1370 Instructor: Gustavo Dietrich
//
// Program Description: This takes a number and gives a table of equivilant size.
//
/////////////////////////////////////////////////////////////////////

#include <iostream>
#include <iomanip>
using namespace std;

// Declare constant DIM = 7
int const DIM = 7;


// Inserte prototypes here

void createBoard(char array1[][DIM], int bsize);

void printBoard1(char array1[][DIM], int bsize);

void printBoard2(char array1[][DIM], int bsize);


int main()
{
	// Declare a two-dimensional array (using the constant) to hold single characters
char array1[DIM][DIM];
	// Declare variable bsize to hold a whole number
int bsize;
	// Declare variable answer to hold a character
char answer;
	// Use a do-loop to allow the user to try again

do{  
  
do{

  		// Prompt the user "Please enter the size of the board [1-7]: "

  cout << "Please enter the size of the board [1-7]: ";

// Get the size and store it in bsize
  
    cin >> bsize;

		// Check the input stream. If it is invalid, display error message "Invalid entry" and jump out of the loop
  
  if (!(bsize >= 1)){

    cout << endl << "Invalid entry" << endl << endl;
    
break;
    
  }

		// Check if bsize is within the range. If it is, call the functions
  
  if(bsize <= 7 && bsize >= 1){

			// Call the function to create the checkerboard
  createBoard(array1, bsize);


			// Call the function to print the checkerboard

printBoard1(array1, bsize);
    
			// Call the function to print the rotated checkerboard


    
printBoard2(array1, bsize);
    
    }
  		// Otherwise, display error message "Invalid size"
  
  if (!(1 <= bsize && bsize <= 7)){

		// Prompt the user "Do you want to try again [y-n]?: "
    
cout << endl << "Invalid Size" << endl << endl << "Do you want to try again [y-n]?: ";

		// Get the answer and store in answer
    
  cin >> answer;
    
  cout << endl;

// As long as the answer is 'y' (in upper or lower case), keep looping
    
    if(!((answer == 'y') || ('Y' == answer))){

      break;
      
    }
    
  }
  
}while(!(1 <= bsize && bsize <= 7));


cout << endl;
answer = 'l';
cout << "Do you want to try again [y-n]?: ";
cin >> answer;

  }while(!(('n' == answer) || ('N' == answer)));


	
	return 0;
}


// Function definitions

// createBoard(): Receives the two-dimensional array and the size of the board (quantity of rows and columns)
// Using nested loops creates the board according to specifications: starting with 'A' inserts
// the letters in the array separated by a blank box


void createBoard(char array1[][DIM], int bsize){

 int eve = 1;
    int  odd = 0;
    char x = 97;
    for (int i = 0; i < bsize; i++)
    {
        for (int j = 0; j < bsize; j++) {
            if (i % 2 == 0) {
                if (eve == 1) {
                    array1[i][j] = x;
                    eve = 0;
                    x += 1;
                }
                else {
                    array1[i][j] = ' ';
                    eve = 1;
                }
            }
            else {
                if (odd == 1) {
                    array1[i][j] = x;
                    odd = 0;
                    x += 1;
                }
                else {
                    array1[i][j] = ' ';
                    odd = 1;
                }
            }
        }
    }
  
    }



// printBoard1(): Receives the two-dimensional array and the size of the board (quantity of rows and columns)
// Using nested loops prints the board


void printBoard1(char array1[][DIM], int bsize){
    for (int i = 0; i < bsize; i++) {
        for (int j = 0; j < bsize; j++) {
            cout << array1[i][j] << ' ';
        }
        cout << endl;
    }

 cout << endl;
  
}



    



// printBoard2(): Receives the two-dimensional array and the size of the board (quantity of rows and columns)
// Using nested loops prints the board rotated

void printBoard2(char array1[][DIM], int bsize){
    for (int i = 0; i < bsize; i++) {
        for (int j = 0; j < bsize; j++) {
            cout << array1[j][i] << ' ';
        }
        cout << endl;
    }
}