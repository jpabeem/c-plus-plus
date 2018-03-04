// week_6.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stack.h"

using namespace std;

int main()
{
	int wait;

	Stack stack;
	stack.Add(50);
	stack.Add(40);
	stack.Add(30);
	stack.Pop();
	stack.Pop();
	stack.Add(20);
	stack.Add(10);
	
	stack.Print();

	cin >> wait;

    return 0;
}

