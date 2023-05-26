//Tic-Tac-Toe
//CS140
//Taegun Harshbarger
//2/3/21
//Sources: Dr. Emrich's video, lectures, and notes
#include<iostream>
#include<cstdio>

using namespace std;
int main () {

	char grid[5][5];
	int gridSize;
	bool outcome;
	int row;
	int column;
	char player;
	int moveCount = 0;
	int winCounter = 0;

	for (int i=0; i < 5; i++) { //Fills the array/grid with - to show that there is nothing in that spot when displayed
		for (int j=0; j < 5; j++) {
			grid[i][j] = '-';
		}
	}	



	cout << "What grid size would you like?\n";
	cin >> gridSize;
	printf("You have picked gridsize %d x %d\nFormat each move as row column (Example: 0 0)\n", gridSize, gridSize); //These few lines ask for and set the gridsize for the game


	while (outcome != 1) { //Stops the game if someone has won or if all spaces are filled.
		


		if (moveCount % 2 != 0) { //This if statement and its counterparts determine whether an X or O will be placed in the cell
			player = 'O';
		}
		
		else {
			player = 'X';
		}



		if (gridSize == 3) {
			printf(" 0|%c %c %c\n 1|%c %c %c\n 2|%c %c %c\n   0 1 2 \n", grid[0][0], grid[0][1], grid[0][2], grid[1][0], grid[1][1], grid[1][2], grid[2][0], grid[2][1], grid[2][2]); //Displays the grid for 3x3
		}

		else if (gridSize == 4) {
			printf(" 0|%c %c %c %c\n 1|%c %c %c %c\n 2|%c %c %c %c\n 3|%c %c %c %c\n   0 1 2 3 \n", grid[0][0], grid[0][1], grid[0][2], grid[0][3], grid[1][0], grid[1][1], grid[1][2], grid[1][3], grid[2][0], grid[2][1], grid[2][2], grid[2][3], grid[3][0], grid[3][1], grid[3][2], grid[3][3]); //Displays the grid for 4x4
	}

		else if(gridSize == 5) {
			printf(" 0|%c %c %c %c %c\n 1|%c %c %c %c %c\n 2|%c %c %c %c %c\n 3|%c %c %c %c %c\n 4|%c %c %c %c %c\n   0 1 2 3 4 \n", grid[0][0], grid[0][1], grid[0][2], grid[0][3], grid[0][4], grid[1][0], grid[1][1], grid[1][2], grid[1][3], grid[1][4], grid[2][0], grid[2][1], grid[2][2], grid[2][3],grid[2][4], grid[3][0], grid[3][1], grid[3][2], grid[3][3], grid[3][4], grid[4][0], grid[4][1], grid[4][2], grid[4][3], grid[4][4]); //Displays the grid for 5x5

		}

		else{ //Makes sure the player only submits a valid grid size
			printf("Invalid Grid Size. Please pick between 3, 4, or 5\n");
				return(-1);
		}

			cin >> row;
			cin >> column;
			
			if (row < gridSize && column < gridSize && grid[row][column] != 'X' && grid[row][column] != 'O') {
				grid[row][column] = player; //Puts the players input into a cell
			}
			else { //Makes sure invalid moves are not counted towards the moveCount or put into a cell
			printf("Invalid Move\n");
			moveCount--;
			}

			for (int i=0;i < gridSize; i++) { //Row Win
				for (int j=0;j < gridSize; j++) {
					if (grid[i][j]=='X') {
						winCounter=winCounter+1;}
 				else if(grid[i][j]=='O') {
						winCounter=winCounter-1;}
				}
				if(winCounter==gridSize) {
					printf("Congratulations! Player X wins!!\n");
						return(0);
				}
				else if(winCounter==-gridSize) {
					printf("Congratulations! Player O wins!!\n");
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
					printf("Congratulations! Player X wins!!\n");
						return(0);
				}
				else if(winCounter==-gridSize) {
					printf("Congratulations! Player O wins!!\n");
						return(0);
				}
				else {
					winCounter=0;
				}
		} 
			for(int i=0; i < gridSize; i++) { //Top Left to Bottom Right Diagonal Wins
				if (grid[i][i]=='X') {
					winCounter=winCounter+1;
				}
				else if (grid[i][i]=='O') {
					winCounter=winCounter-1;	
				}
			}

			if(winCounter==gridSize) {
				printf("Congratulations! Player X wins!!\n");
					return(0);
				}
			else if(winCounter==-gridSize) {
				printf("Congratulations! Player O wins!!\n");
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
				printf("Congratulations! Player X wins!!\n");
					return(0);
				}
			else if(winCounter==-gridSize) {
				printf("Congratulations! Player O wins!!\n");
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
				printf("Tie!\n");
					return(0);
			}
			else {winCounter=0;}


		moveCount++; //Counts the number of turns to find whos turn it is
	}	
}











