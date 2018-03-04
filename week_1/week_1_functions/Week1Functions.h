#pragma once

#ifdef WEEK1FUNCTIONS_EXPORTS  
#define WEEK1FUNCTIONS_API __declspec(dllexport)   
#else  
#define WEEK1FUNCTIONS_API __declspec(dllimport)   
#endif 

namespace Week1Functions
{
	class Functions
	{
	public:
		/*
		Exercise 1
		*/
		static WEEK1FUNCTIONS_API int getSum(int a, int b);

		/*
		Execise 2
		*/
		static WEEK1FUNCTIONS_API int oddOrEven(int number);

		/*
		Exercise 3
		*/
		static WEEK1FUNCTIONS_API int powerOf(int base, int exponent);

		/*
		Exercise 4
		*/
		static WEEK1FUNCTIONS_API bool isPrime(int number);

		/*
		Exercise 5
		*/
		static WEEK1FUNCTIONS_API int inArray(int input[], int number, int size);

		/*
		Exercise 6
		*/
		static WEEK1FUNCTIONS_API void bubbleSort(int input[], int size);

		static WEEK1FUNCTIONS_API void printArray(int input[], int size);

		/*
		Exercise 7
		*/
		static WEEK1FUNCTIONS_API int greatestCommonDivisorEuclid(int a, int b);

		/*
		Exercise 8
		*/
		static WEEK1FUNCTIONS_API int leastCommonMultiple(int a, int b);
	};
	
}