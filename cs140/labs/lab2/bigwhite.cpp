// Lab 2:  bigwhite
// COSC 140
// Taegun Harshbarger
// 2/10/21
//Sources: Dr. Plank's notes and Dr. Emrich's videos and notes
#include<iostream>
#include<cstdio>
#include<sstream>

using namespace std;

int main(int argc, char *argv[]) {

int row;
int column;
istringstream input1;
istringstream input2;
input1.str(argv[1]);
input1 >> row; //Passes argv[1] to an int

input2.str(argv[2]); //Passes argv[2] to an int
input2 >> column;

	if (argc != 3) {
		cerr << "usage: bigwhite rows cols" << endl; //Error check for the input
		return(-1);
	}

	else if (row <= 0 || column <= 0) {
		cerr << "usage: bigwhite rows cols" << endl; //Error check for the rows and column input
		return(-1);
	}

	printf("P2\n%d %d\n255\n", column, row);



	for(int rowCount = 0; rowCount < row; rowCount++) {
		for(int columnCount = 0; columnCount < column; columnCount++) { //Prints the pixel value for whitespace
		cout << "255 ";
		}
		cout << endl;
	}




  return 0;

}

