// Challenge 1:  Tic-tac-toe input validator
//COSC 140
//Taegun Harshbarger
//2/5/21
//Sources: Dr. Plank's notes and Dr. Emrich's videos and notes
#include <iostream>
#include <cstdio>
#include <sstream>
#include <vector>
#include <cstdlib>

using namespace std;

int main(int argc, char *argv[]) {

int gridSize;
int k;
vector<char> grid;
istringstream input;
char gridCell;

	if (argc != 2) {
		printf("Error!  Invalid no. of command line arguments!\n"); //Prints if there are too many command line arguments
		return(0);
	}

	input.str(argv[1]);//Inspired by Dr. Plank's Notes
	input >> gridSize; //This uses stringstreams to change the char to an int
	
	
	while(cin >> gridCell) { //This while loop counts the number of times an input is made into the vector from the input stream
		grid.push_back (gridCell);
		k++;
	}
	

	if (k > gridSize*gridSize) {
		printf("Too many cells for a %d x %d board\n",gridSize,gridSize); //Prints if there are too many cells in the file
	}

	else if(k < gridSize*gridSize) {
		printf("Too few cells for a %d x %d board\n",gridSize,gridSize); //Prints if there are too few cells in the file
	}

	else {
		cout << "Valid board" << std::endl; //Prints if the board is valid
	}
 
	return 0;

}

