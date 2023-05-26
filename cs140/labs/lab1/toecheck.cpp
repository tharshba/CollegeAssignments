//ToeCheck
//CS140
//Taegun Harshbarger
//2/3/21
//Sources: Dr. Emrich's video, lecture, and notes and my toe.cpp for the win condition checks

#include<cstdio>
#include<iostream>
using namespace std;

int main() {

char input[25];
int gridSize;
char grid[5][5];
int p;
int winCounter=0;

	cin >> gridSize; //Finds the size of the tictactoe grid from the input file
	
	for (int i=0; i < (gridSize*gridSize); i++) { //Puts the contents into a 1d char array to be used later
		cin >> input[i];
	}
	
	for	(int i=0; i < gridSize; i++) { //Takes the contents from the 1d char array and innputs them into the 2d char array
			for (int j=0; j < gridSize; j++){
				grid[i][j]=input[p];
				p++;
			}
		}

	for (int i=0;i < gridSize; i++) { //Row Win
		for (int j=0;j < gridSize; j++) {
			if (grid[i][j]=='X') {
				winCounter=winCounter+1;}
				else if(grid[i][j]=='O') {
				winCounter=winCounter-1;}
		}

		if(winCounter==gridSize) {		
			printf("X wins\n");
			return(0);}

		else if(winCounter==-gridSize) {
			printf("O wins\n");
			return(0);
		}

		else {
			winCounter=0;
		}
	}

	for (int i=0;i < gridSize; i++) { //Column Win
		for (int j=0;j < gridSize; j++) {
			if (grid[j][i]=='X') {
				winCounter=winCounter+1;}
			else if(grid[j][i]=='O') {
				winCounter=winCounter-1;}
		}
		if(winCounter==gridSize) {
			printf("X wins\n");
			return(0);
		}
		else if(winCounter==-gridSize) {
			printf("O wins\n");
			return(0);
		}
		else {
			winCounter=0;
		}
	}

		for (int i=0; i < gridSize; i++) { //Top Left to Bottom Right Diagonal Wins
			if (grid[i][i]=='X') {
				winCounter=winCounter+1;
			}
			else if (grid[i][i]=='O') {
				winCounter=winCounter-1;					
			}
		}
		if(winCounter==gridSize) {
			printf("X wins\n");
			return(0);
		}
		else if(winCounter==-gridSize) {
			printf("O wins\n");
			return(0);
		}
		else {
			winCounter=0;
		}

		int k=gridSize-1;//k will be the row -1 for each iteration

		for(int i=0; i < gridSize; i++){ //Bottom left to Top Right diagonal wins
			if (grid[k][i]=='X') {
				winCounter=winCounter+1;
			}

			else if (grid[k][i]=='O') {
				winCounter=winCounter-1;
			}
			k--;
		}
		if(winCounter==gridSize) {
			printf("X wins\n");
			return(0);
		}
		else if(winCounter==-gridSize) {
			printf("O wins\n");
			return(0);
		}
		else {
			winCounter=0;
		}
		for(int i=0; i < gridSize; i++) { //Goes through every cell to check for an input. If there is an input winCounter+1
			for (int j=0; j < gridSize; j++) {
				if (grid[i][j]== 'X' || grid[i][j]=='O') {
					winCounter=winCounter+1;
				}
			}
		}

		if(winCounter==(gridSize*gridSize)) {
			printf("Tie\n");
			return(0);
		}
		else {winCounter=0;}
}
