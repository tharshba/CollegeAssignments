//Lab0
////COSC140
////Taegun Harshbarger
////1/28/2021
//Sources: Dr. Plank's notes and Dr. Emrich's video and notes

#include <iostream>

using namespace std;

int main()
{
	char c;
	int val;

	while (cin >> c) {
		if (c != '.' && c != '-') //Moves the file past the filler rocks and dirt
			val += (c - '@'); //Turns the alphabetical ounce values into their numerical equivalent values using ascii values. Also, adds these values
	}
	cout << val << endl; //Prints the final ounce value
}
