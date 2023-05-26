//Lab 2:  pgminfo!
//COSC 140
//Taegun Harshbarger
//2/9/21
//Sources: Dr. Plank's notes and Dr. Emrich's videos and notes
#include<iostream>
#include<cstdio>
#include<vector>

using namespace std;

int main(int argc, char *argv[]) {
string P2;
int column;
int row;
int maxNumber;
int pixelNumber;
int pixel;
double pixelAvg;
double pixelTotal;

	cin >> P2;
	if (P2 != "P2") {
		cerr << "Bad PGM file -- first word is not P2" << endl; //Error checks for the P2
		return(-1);
	}
	cin >> column;
	cin >> row;
	if (column < 0 || row < 0) {
		cerr << "Bad PGM file -- No row specification" << endl; //Error Checks for the column and row
		return(-1);
	}
	cin >> maxNumber;
	if (maxNumber != 255) {
		perror("Does not work"); //Error checks for the 255
		return(-1);
	}
	
	pixelNumber=row*column; //Finds the number of pixels

	for (int i=0; i < pixelNumber; i++) { //Adds all the pixels together
		cin >> pixel;
		if (pixel < 0 || pixel > 255) {
			cerr << "Bad PGM file -- pixel " << i << " is not a number between 0 and 255" << endl;
			return(-1);
		}
		pixelTotal+=pixel;
	}
	
	pixelAvg=pixelTotal/pixelNumber; //Finds the avg pixel value

	if(cin >> pixel) {
		cerr << "Bad PGM file -- Extra stuff after the pixels" << endl;	
		return(-1);
	}

	printf("# Rows:%12d\n# Columns:%9d\n# Pixels:%10d\nAvg Pixel:%9.3f\n",row,column,pixelNumber,pixelAvg);


return(0);
}
