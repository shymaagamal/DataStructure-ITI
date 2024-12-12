#pragma once

#include "Exception.h"
#include "Node.h"

class StackLinkedList
{

private:
	Node* tail;
public:

	void push(int data_);
	void pop(int& data);
	void peek(int& data);
	void Display();
	StackLinkedList();
	~StackLinkedList();

};

