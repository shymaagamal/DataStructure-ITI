#include "queueArray.h"
#include <iostream>
using namespace std;

void queueArray::enQueue(int data)
{
	if (count ==size_)
	{
		Exception e(101, "Queue is full");
		throw e;
	}
	else
	{
		queue[rear] = data;
		rear = (rear + 1) % size_;  
		count++;

	}
}
void queueArray::deQueue(int& data)
{
	if (count == 0)
	{
		Exception e(101, "Queue is Empty");
		throw e;
	}
	else
	{
		data= queue[front];
		front  = (front + 1) % size_;
		count--;

	}
}
int queueArray::Getfront()
{
	if (count == 0)
	{
		Exception e(101, "Queue is Empty");
		throw e;
	}
	else
	{
		return queue[front];
	

	}
}
int queueArray::GetRear()
{
	if (count == 0)
	{
		Exception e(101, "Queue is Empty");
		throw e;
	}
	else
	{
		return queue[(rear - 1 + size_) % size_];


	}
}
void queueArray::Display()
{
	if (count == 0) {
		Exception e(101, "Queue is Empty");
		throw e;
	}

	int i = front;
	for (int j = 0; j < count; j++) {
		cout << queue[i] << " ";
		i = (i + 1) % size_;  
	}
	cout << endl;
}
queueArray::queueArray()
{
	front = rear = 0;
	this->size_ = 10;
	queue = new int[size_];
}
queueArray::queueArray(int size)
{
	front = rear = 0;
	this->size_ = size;
	queue = new int[size_];

}
queueArray::~queueArray()
{

}