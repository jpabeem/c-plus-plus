// week_1_functions.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"
#include <iostream>
#include <cmath>
#include "Week1Functions.h"

using namespace std;

namespace Week1Functions
{
	/*
	Exercise 1
	*/
	int Functions::getSum(int a, int b)
	{
		return a + b;
	}

	/*
	Execise 2
	*/
	int Functions::oddOrEven(int number)
	{
		if (number % 2 == 1) {
			std::cout << number << " is odd" << endl;
		}
		else {
			std::cout << number << " is even" << endl;
		}

		return 0;
	}

	/*
	Exercise 3
	*/
	int Functions::powerOf(int base, int exponent)
	{
		if (exponent < 1) {
			return 1;
		}
		else {
			return base * powerOf(base, exponent - 1);
		}
	}

	/*
	Exercise 4
	*/
	bool Functions::isPrime(int number)
	{
		bool isPrime = true;
		int i = 2;
		int squareRoot = sqrt(number);
		while (i <= squareRoot) {
			if (number % i == 0) {
				isPrime = false;
				break;
			}

			++i;
		}

		return isPrime;
	}

	/*
	Exercise 5
	*/
	int Functions::inArray(int input[], int number, int size)
	{
		for (int i = 0; i < size; i++) {
			if (input[i] == number) {
				return i;
			}
		}

		return -1;
	}

	/*
	Exercise 6
	*/
	void Functions::bubbleSort(int input[], int size)
	{
		int i, j;

		for (int i = 0; i < size - 1; i++) {
			for (int j = 0; j < size - i - 1; j++) {
				if (input[j] > input[j + 1]) {
					int temp = input[j];
					input[j] = input[j + 1];
					input[j + 1] = temp;
				}
			}
		}
	}

	void Functions::printArray(int input[], int size)
	{
		if (input != NULL) {
			for (int i = 0; i < size; i++) {
				std::cout << "Element: " << i << ", value: " << input[i] << endl;
			}
		}
	}

	/*
	Exercise 7
	*/
	int Functions::greatestCommonDivisorEuclid(int a, int b)
	{
		while (b != 0)
		{
			int temp = b;
			b = a % b;
			a = temp;
		}

		return a;
	}

	/*
	Exercise 8
	*/
	int Functions::leastCommonMultiple(int a, int b)
	{
		int gcd = greatestCommonDivisorEuclid(a, b);
		int lcm = (a*b / gcd);
		return lcm;
	}

}
