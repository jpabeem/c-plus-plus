// week_2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;


void arrayAscendingOrder(int* &pointer, int n)
{
	pointer = new int[n];
	for (int i = 0; i < n; i++)
	{
		pointer[i] = i + 1;
	}
}

void createPascalTriangle(int** &p, int depth)
{
	/*int i, j;
	p = new int*[depth];
	for (i = 0; i < depth; i++)
	{
		p[i] = new int[i + 1];
		p[i][0] = 1;
		p[i][i] = 1;
		for (j = 1; j < i; j++)
			p[i][j] = p[i - 1][j - 1] + p[i - 1][j];
	}*/
	/*pointer = new int* [depth];
	for (int i = 0; i < depth; i++)
	{
		pointer[0] = new int[i + 1];
		pointer[i][0] = 1;
		pointer[i][i] = 1;
		for (int j = 0; j < i; j++)
		{
			pointer[i][j] = -1;
		}
	}*/
}

int main() {
	int wait;
	/*
		Opdracht 1
	*/
	// a
	int* p;
	int* q;
	int* r;

	// b
	p = new int;
	q = new int;
	
	// c
	*p = 2;
	*q = 3;

	// d
	cout << "Value of P: " << *p << endl;
	cout << "Value of Q: " << *q << endl;
	
	// e
	r = p;
	p = q;
	q = r;

	// f
	cout << endl;
	cout << "Value of P: " << *p << endl;
	cout << "Value of Q: " << *q << endl;

	delete p;
	delete q;

	/*
		Opdracht 2
	*/
	int n = 5;
	int* pointer = new int;

	arrayAscendingOrder(pointer, n);

	for (int i = 0; i < n; i++)
	{
		cout << pointer[i] << endl;
	}


	/*
		Opdracht 3 WERKT NIET
	*/
	int** doublePointer;
	int depth = 5;

	createPascalTriangle(doublePointer, depth);

	for (int i = 0; i < depth; i++)
	{
		cout << pointer[i] << endl;
	}

	cin >> wait;
	
	return 0;
}

