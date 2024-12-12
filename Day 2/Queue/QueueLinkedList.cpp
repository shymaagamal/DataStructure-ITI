#include "QueueLinkedList.h"
#include <iostream>
using namespace std;


void QueueLinkedList::enQueue(int data)
{
	Node* newNode = new Node(data);
	if (front == nullptr )
	{
		front = rear = newNode;
	}
	
	else
	{
		rear->next = newNode;
		rear = newNode;
	}
}
void QueueLinkedList::deQueue(int& data)
{
	if (front == nullptr)
	{
		Exception e(102, "Queue is Empty");

		throw e;
	}

	else
	{
		data = front->data;
		Node* temp = front;
		front = front->next;
		if (front == nullptr)
		{
			rear = nullptr;
		}

		delete temp;
	}
}
int QueueLinkedList::Getfront()
{
	if (front == nullptr)
	{
		Exception e(102, "Queue is Empty");

		throw e;
	}

	else
	{
		return front->data;

	}
}
int QueueLinkedList::GetRear()
{
	if (rear == nullptr)
	{
		Exception e(102, "Queue is Empty");

		throw e;
	}

	else
	{
		return rear->data;

	}
}
void QueueLinkedList::Display()
{
	Node* temp = front;
	while (temp != nullptr)
	{
		cout << temp->data << " --> ";
		temp = temp->next;
	}
	cout << endl;
}
QueueLinkedList::QueueLinkedList()
{
	front = nullptr;
	rear = nullptr;
}
QueueLinkedList::~QueueLinkedList()
{

}