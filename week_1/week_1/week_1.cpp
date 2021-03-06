// week_1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cmath>

using namespace std;

bool intArrayEqualToInt(int* array, int arraySize, int number);


/*
	Exercise 1
*/
int getSum(int a, int b)
{
	return a + b;
}

/*
	Execise 2
*/
int oddOrEven(int number)
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
int powerOf(int base, int exponent)
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
bool isPrime(int number)
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
int inArray(int input[], int number, int size)
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
void bubbleSort(int input[], int size)
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

void printArray(int input[], int size)
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
int greatestCommonDivisorEuclid(int a, int b)
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
int leastCommonMultiple(int a, int b)
{
	int gcd = greatestCommonDivisorEuclid(a, b);
	int lcm = (a*b / gcd);
	return lcm;
}

/*
	Practice 1a: the year 2011
*/

class PrimeYear {
	int currentYear;
	int primeArray[];
public:
	void setPrimeArray(int array[]);
};
//
//void Rectangle::set_values(int x, int y) {
//	width = x;
//	height = y;
//}

// isPrime is already a defined function

int* createPrimeNumberArray(int size)
{
	int *array = new int[size];
	for (int i = 0; i < size; i++) {
		if (isPrime(i))
			array[i] = i;
		else
			array[i] = NULL;
	}
	return array;
}

bool isConsecutivePrimeNumberYear(int year, int size)
{
	int* primeArray = createPrimeNumberArray(2500);
	int *tempArray = new int[11];
	int currentStep = 0;
	bool isConsecutivePrimeNumberYear = true;

	for (int i = 0; i < size; i++) {
		if (primeArray[i] != NULL) {
			if (currentStep < 10) {
				// still filling the tempArray
				tempArray[currentStep] = primeArray[i];
				currentStep++;
			}
			else {
				// check if tempArray's sum is equal to the given year
				if (intArrayEqualToInt(tempArray, 11, year)) {

				}
				else {
					// remove first element, shift everything to the right
					for (int j = 1; j < 11; j++) {
						int temp = j;
						tempArray[j - 1] = tempArray[j];
					}
					tempArray[10] = tempArray[i];
				}
			}
			
		}

		return isConsecutivePrimeNumberYear;
	}

}

bool intArrayEqualToInt(int* array, int arraySize, int number)
{
	int arraySum = 0;
	for (int i = 0; i < arraySize; i++) {
		arraySum += array[i];
	}

	return arraySum == number;
}


int main()
{
	int a;
	int b;
	int wait;

	// exercise 1
	a = 5;
	b = 6;
	std::cout << "Sum 5 + 6: " << getSum(a, b) << endl;

	// exercise 2
	oddOrEven(1);
	oddOrEven(2);
	oddOrEven(999);

	// exercise 3
	std::cout << "2 to the power of 3: " << powerOf(2, 3) << endl;
	std::cout << "5 to the power of 3: " << powerOf(5, 3) << endl;
	std::cout << "9 to the power of 3: " << powerOf(9, 3) << endl;

	// exercise 4
	std::cout << "2 is a prime number: " << isPrime(2) << endl;
	std::cout << "8 is a prime number: " << isPrime(8) << endl;
	std::cout << "13 is a prime number: " << isPrime(13) << endl;
	std::cout << "20 is a prime number: " << isPrime(20) << endl;
	std::cout << "40099 is a prime number: " << isPrime(40099) << endl;

	// exercise 5
	int array[5] = { 2, 176, 4, 30, 20 };
	std::cout << "4 is in array: " << inArray(array, 4, 5) << endl;
	std::cout << "5 is in array: " << inArray(array, 5, 5) << endl;

	// exercise 6
	bubbleSort(array, 5);
	printArray(array, 5);

	// exercise 7
	std::cout << "The greatest common divisor of 6 and 30 is: " << greatestCommonDivisorEuclid(6, 30) << endl;
	std::cout << "The greatest common divisor of 30 and 40 is: " << greatestCommonDivisorEuclid(30, 40) << endl;

	// exercise 8
	std::cout << "The least common multiple of 30 and 40 is:  " << leastCommonMultiple(30, 40) << endl;
	std::cout << "The least common multiple of 4 and 6 is:  " << leastCommonMultiple(4, 6) << endl;

	cin >> wait;

	return 0;
}

