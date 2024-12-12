#pragma once

#include"Node.h"
#include"Exception.h"
class queueArray
{
private:
	int rear;
	int  front;
	int* queue;
	int size_;
	int count;

public:
	void enQueue(int data);
	void deQueue(int& data);
	int Getfront();
	int GetRear();
	void Display();
	queueArray();
	queueArray(int size);
	~queueArray();
};

