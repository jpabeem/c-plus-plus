#pragma once

#include "stdafx.h"

using namespace std;

namespace Week1b
{
	struct PlayerState
	{
		char name[20];
		int level;
		double health;
		int experience;
	};

	class Functions
	{
		public:
			static void alterFraction(int a, int b);
			static bool isPalindrome(char[]);
			static void guessWord(char word[]);
			static void readTxtFile(string name);
			static void printPlayerStates(PlayerState states[], int size);
			static void writePlayerStatesToBinary(PlayerState states[], int size);
			static void loadFromBinaryFile(char filename[]);
	};
}