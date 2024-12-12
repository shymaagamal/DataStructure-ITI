#pragma once
#include "Node.h"


class stackArray
{
private:
	int* tail;
	int top;
	int size_;
public:
	
	
	
	void push(int data);
	void pop(int& data);
	void peek(int& data);
	void Display();
	
	stackArray(int size);
	stackArray();
	~stackArray();








};

