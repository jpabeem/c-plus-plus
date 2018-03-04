#pragma once
#include <iostream>

using namespace std;

struct Block {
	Block* next;
	int value;
};

//template <typename T>
class Stack {
	Block* top;

public:
	Stack();
	~Stack();
	void Add(int number);
	int Pop();
	void Print();
};