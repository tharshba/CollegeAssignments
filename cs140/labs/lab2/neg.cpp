// Lab 2:  neg
//COSC 140
//Taegun Harshbarger
//2/7/21
//Sources: Dr. Plank's notes and Dr. Emrich's videos and notes
//
#include<iostream>
#include<cstdio>

using namespace std;

int main(int argc, char *argv[]) {

string P2;
int row;
int column;
int maxNumber;
int pixel;

	cin >> P2; //These few lines bring the inputs from the file in
	if (P2!="P2") {
		cerr << "Invalid File" << endl;
	}
	cin >> column;
	cin >> row;
	cin >> maxNumber;
	if (maxNumber != 255) {
		cerr << "Bad PGM file -- No 255 following the rows and columns" << endl; //Error checks for the 255
		return(-1);
	}
	printf("%s\n%d %d\n%d\n",P2.c_str(),column,row,maxNumber); //Prints the format stuff at the top of the file


	for(int rowCount=0; rowCount < row; rowCount++) { //Takes every pixel from the input file and makes it the opposite to put it back into the output file
		for(int columnCount=0; columnCount < column; columnCount++) {
			cin >> pixel;
			cout << (255-pixel) << " ";
		}
		cout << endl;
	}

  return 0;

}

