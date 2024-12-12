#include "StackLinkedList.h"
#include "Exception.h"
#include <iostream>
using namespace std;



void StackLinkedList::push(int data_)
{
	Node* node = new Node(data_);

	if (tail == nullptr)
	{
		tail = node;
		return;
	}
	else
	{
		tail->prev = node;
	}
}
void StackLinkedList::pop(int& data)
{
	if (tail == nullptr)
	{
		Exception e(102, "Stack is Empty");

		throw e;
	}

	else
	{
		data = tail->data;
		Node* temp = tail;
		tail = tail->prev;

		delete temp;
	}
}
void StackLinkedList::peek(int& data)
{
	if (tail == nullptr)
	{
		Exception e(102, "Stack is Empty");

		throw e;
	}

	else
	{
		data = tail->data;

	}
}
void StackLinkedList::Display()
{
	Node* temp = tail;
	while (temp !=nullptr)
	{
		cout << temp->data << " --> ";
		temp = temp->prev;
	}
	cout << endl;

}

StackLinkedList::StackLinkedList()
{
	
	tail = NULL;
}


StackLinkedList::~StackLinkedList()
{
}


