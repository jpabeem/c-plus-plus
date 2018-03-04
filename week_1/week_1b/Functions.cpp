#include "stdafx.h"
#include "Functions.h"
#include "Week1Functions.h"
#include <fstream>
#include <string>

using namespace std;

namespace Week1b
{
	const int LENGTH = 40;

	void Functions::alterFraction(int numerator, int denumerator)
	{
		int gcd = Week1Functions::Functions::greatestCommonDivisorEuclid(numerator, denumerator);
		
		if (gcd == 1)
			cout << "The fraction " << numerator << "/" << denumerator << " cannot be simplified." << endl;
		else
			cout << "The fraction " << numerator << "/" << denumerator << " can be simplified to: " << numerator/gcd << "/" << denumerator/gcd << endl;
	}

	bool Functions::isPalindrome(char input[])
	{
		int length = strlen(input);
		int incrementor = 0;
		bool isPalindrome = true;

		for (int i = length - 1; i >= 0; i--)
		{
			char original = input[incrementor];
			char reversed = input[i];
			if (original != reversed)
			{
				isPalindrome = false;
			}
			incrementor++;
		}
		return isPalindrome;
	}

	void fillArray(char input[], int size)
	{
		for (int i = 0; i < size; i++)
		{
			if (i == (size - 1))
			{
				input[i] = '*';
				input[i + 1] = '\0';
			}
			else
			{
				input[i] = '*';
			}
		}
	}

	void Functions::guessWord(char word[])
	{
		int tries = 10;
		int wordLength = strlen(word);
		char cipheredWord[LENGTH];
		char guess[LENGTH];
		const char CHAR = '*';

		strcpy_s(cipheredWord, "");

		fillArray(cipheredWord, wordLength);

		cout << "Ciphered word: " << cipheredWord << endl;

		for (int turn = 0; turn < tries; turn++)
		{
			cout << "Enter guess:" << endl;
			cin.getline(guess, LENGTH);

			if (strcmp(word, guess) == 0)
			{
				cout << "You succesfully guesed the word: " << guess << ", HOORAY!" << endl;
				break;
			}

			for (int i = 0; i < strlen(guess); i++)
			{
				if (i < wordLength)
				{
					if (guess[i] == word[i])
					{
						cipheredWord[i] = word[i];
					}
				}
			}

			cout << "Word: " << cipheredWord << " not guessed yet." << endl;
		}
	}

	void Functions::readTxtFile(string name)
	{
		ifstream inputFile;
		ofstream outputFile;

		char letter;

		inputFile.open(name);

		if (inputFile.is_open())
		{
			letter = inputFile.get();
			while (!inputFile.eof())
			{
				cout << letter;
				letter = inputFile.get();
			}
			inputFile.close();
		}

		else cout << "Unable to open file";
	}

	void Functions::printPlayerStates(PlayerState state[], int size)
	{
		for(int i = 0; i < size; i++) {
			cout << "PlayerState: " << i+1 << ":"<< endl;
			cout << "Name: " << state[i].name << endl;
			cout << "Level: " << state[i].level << endl;
			cout << "Health: " << state[i].health << endl;
			cout << "Experience: " << state[i].experience << endl;
			cout << endl;
		}
	}

	void Functions::writePlayerStatesToBinary(PlayerState states[], int size)
	{
		ofstream outputFile("game.dat", ios::out | ios::binary);
		for (int i = 0; i < size; i++) {
			outputFile.write((char*)&states[i], sizeof(PlayerState));
		}
		cout << "All playerstates saved to game.dat" << endl;
		outputFile.close();
	}

	void Functions::loadFromBinaryFile(char filename[])
	{
		PlayerState state;
		ifstream inputFile;
		ofstream outputFile;

		inputFile.open(filename, ios::binary);
		outputFile.open("playerStates.txt", ios::out);

		if (inputFile.fail()) {
			cout << "Could not read binary file, try again.";
			return;
		}
		else if (outputFile.fail()) {
			cout << "Could not write to txt file, try again.";
			return;
		}

		inputFile.read((char *) &state, sizeof(PlayerState));

		int studentCount = 1;

		while (!inputFile.eof()) {
			cout << "Student # " << studentCount << ": " << state.name << endl;
			studentCount++;
			if (outputFile.is_open()) {
				outputFile.write(state.name, strlen(state.name));
				outputFile.write("\n", 1);
			}
			inputFile.read((char *)&state, sizeof(PlayerState));
		}

		cout << "All names from PlayerState are stored in playerStates.txt" << endl;

		inputFile.close();
	}
}