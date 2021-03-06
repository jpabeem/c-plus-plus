// week_1b.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "Functions.h"
#include "Week1Functions.h"

using namespace std;
using namespace Week1b;

int main()
{	
	const int LENGTH = 40;
	char word[LENGTH];
	int in;

	// Exercise 1: test a library function 
	cout << "Sum of 5 and 4: " << Week1Functions::Functions::getSum(5, 4) << endl;

	cout << endl;

	// Exercise 2: try to simplify the fraction
	Functions::alterFraction(4, 12);
	Functions::alterFraction(5, 10);
	Functions::alterFraction(4, 13);
	Functions::alterFraction(48, 52);
	Functions::alterFraction(1550, 1600);

	cout << endl;

	// Exercise 3: two dimensional char array
	// done on laptop

	// Exercise 4: IsPalindrome
	std::cout << std::boolalpha;

	char palindroom[20];
	strcpy_s(palindroom, "lepellepel");
	
	cout << "Is " << palindroom << " een palindroom? " << Week1b::Functions::isPalindrome(palindroom) << endl;

	strcpy_s(palindroom, "saippuakivikauppias");
	cout << "Is " << palindroom << " een palindroom? " << Week1b::Functions::isPalindrome(palindroom) << endl;

	strcpy_s(palindroom, "nietes");
	cout << "Is " << palindroom << " een palindroom? " << Week1b::Functions::isPalindrome(palindroom) << endl;

	strcpy_s(palindroom, "windesheim");
	cout << "Is " << palindroom << " een palindroom? " << Week1b::Functions::isPalindrome(palindroom) << endl;

	cout << endl;

	// Exercise from lecture 2: create a word guessing game
	cout << "Enter the word that has to be guessed:" << endl;
	cin.getline(word, LENGTH);
	
	Functions::guessWord(word);

	cout << endl;

	// Exercise 5: read .txt file
	Functions::readTxtFile("test.txt");

	cout << endl;
	cout << endl;

	// Exercise 6: create and print PlayerState struct array
	PlayerState states[4];
	PlayerState state1 = { "Jeroen", 99, 99.0,  13034500 };
	states[0] = state1;
	PlayerState state2 = { "Tester", 92, 15.0,  6500000 };
	states[1] = state2;
	PlayerState state3 = { "Noob", 1, 10.0,  0 };
	states[2] = state3;
	PlayerState state4 = { "Blademaster", 150, 150.8,  200000000 };
	states[3] = state4;

	// Exercise 7
	Functions::printPlayerStates(states, 4);

	// Exercise 8: save array with PlayerStates to game.dat binary file
	Functions::writePlayerStatesToBinary(states, 4);

	// Exercise 9: load PlayerStates from game.dat and print names
	char filename[12];
	strcpy_s(filename, "game.dat");
	Functions::loadFromBinaryFile(filename);

	cin >> in;

    return 0;
}

