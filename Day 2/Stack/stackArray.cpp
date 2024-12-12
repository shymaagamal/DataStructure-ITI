#include "stackArray.h"
#include "Exception.h"
#include <iostream>
using namespace std;


void stackArray::push(int data)
{
	if (top == size_)
	{
		Exception e(101,"Stack is full" );
		throw e;
	}
	this->tail[top] = data;
	top++;
}
void stackArray::pop(int &data)
{
	if (top == 0)
	{
		Exception e(102, "Stack is Empty");

		throw e;
	}
	data = tail[top];
	top--;
}
void stackArray::peek(int& data)
{
	if (top == 0)
	{
		Exception e(102, "Stack is Empty");

		throw e;
	}
	data = tail[top];
}
void stackArray::Display()
{
	for (int i = top-1; i > -1; i--)
	{
		cout << tail[i] << " --> " ;
	}
	cout << endl;

}

stackArray::stackArray()
{
	top = 0;
	size_ = 10;
	tail = new int[size_];
}
stackArray::stackArray(int size)
{
	top = 0;
	size_ = size;
	tail = new int[size];
}

stackArray::~stackArray()
{
	delete tail;
}


