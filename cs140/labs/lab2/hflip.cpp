// Lab 2:  hflip!
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
int row;
int column;
int maxNumber;
int pixel;
int pixelCount;
vector<vector<int> > pixels;

	cin >> P2; //These few lines bring the inputs from the file in
	if (P2 != "P2") {
		cerr << "Bad PGM file -- first word is not P2" << endl;
		return(-1);
	}

	cin >> column;
	cin >> row;
	if (column < 0 || row < 0) {
		cerr << "Bad PGM file -- No column specification" << endl;
		return(-1);

	}
	cin >> maxNumber;
	if (maxNumber != 255) {
		cerr << "Bad PGM file -- No 255 following the rows and columns" << endl;
		return(-1);
	}

	printf("%s\n%d %d\n%d\n",P2.c_str(),column,row,maxNumber); //Prints the format stuff at the top of the file


	pixels.resize(row+1, vector<int>(column+1));//Resizes the vector so that it matches the size of the file

	for(int rowCount=0; rowCount < row; rowCount++){ //Puts the pixels into each cell of the 2d array
		for(int columnCount=0; columnCount < column; columnCount++) {
			cin >> pixel;
			if (pixel < 0 || pixel > 255) {
				cerr << "Bad PGM file -- pixel " << pixelCount << " is not a number between 0 and 255" << endl;
				return(-1);
			}
			pixels[rowCount][columnCount]=pixel;
			pixelCount++;
		}
	}

	for (int i = 0; i < row; i++) { //This for loop allows the pixel columns to be reversed so that the image is flipped when outputted
		for (int j = column; j > 0; j--){
			cout << pixels[i][j] << " ";
		}
		cout << endl;
	}




	return 0;


}

