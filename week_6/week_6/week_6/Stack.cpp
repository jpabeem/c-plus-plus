#include "stdafx.h"

Stack::Stack()
{
	top = NULL;
}

Stack::~Stack() {
}

void Stack::Add(int number) {
	Block* temp = new Block;
	temp->value = number;
	temp->next = top;
	top = temp;
}

int Stack::Pop() {
	int topVal = -1;

	if (top != NULL) {
		topVal = top->value ? top->value : 0;
		Block* temp = top->next;
		delete(top);
		top = temp;
	}

	return topVal;
}

void Stack::Print() {
	Block* temp = top;
	while (temp != NULL)
	{
		cout << temp->value << endl;
		temp = temp->next;
	}
}
