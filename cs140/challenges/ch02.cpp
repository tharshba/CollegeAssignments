//Challenge 2:  Is it a Palindrome?
//COSC140
//Taegun Harshbarger
//2/12/21
//Sources: Dr. Plank's notes and Dr. Emrich's video and notes
//QUESTION 1: When passing by value, a copy of the value is passed on to the new spot. When passing by reference, one is telling exactly where that value is stored instead of copying the value
//QUESTION 2: Passing by reference is faster than passing by value.
//QUESTION 3: Const lets the computer know it will not be modified. This can be good for error checking because the compiler will tell you whether it has been changed
#include <iostream>
#include <vector>
#include <cstdio>
using namespace std;

int findSize(); //Prototype Function
const string correct="Palindrome";  //Constant String

int main(int argc, char *argv[]) {

vector<int> forwards;
vector<int> backwards;
int input;
int size;
int i=0;

	size=findSize(); //Finds the size from the findSize fucntion
	forwards.resize(size); //Makes sure the vectors fit the size of the palindromes
	backwards.resize(size);
	
	while(cin >> input) { //Inputs the palindrome into the vector
		forwards[i]=input;
		i++;
	}

	for (int j = 0; j < size; j++) {
		backwards[j]=forwards[i-1]; //Makes sure the backwards vector matches the opposite of the forwards vector
		i--;
	}

	if (backwards==forwards) { //Checks to see if it is a palindrome
		cout << correct << endl;
		return(0);
	}

	else {
		std::cout << "Not a palindrome" << std::endl; //Error check if it is not a palindrome
		return(0);
	}
return 0;

}




int findSize() {
	int size;
	cin >> size;
	return(size);
}

