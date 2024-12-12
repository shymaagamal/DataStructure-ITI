#pragma once
#include"Node.h"
#include"Exception.h"
class QueueLinkedList
{
private :
	Node* rear;
	Node* front;
public:
	void enQueue(int data);
	void deQueue(int &data);
	int Getfront();
	int GetRear();
	void Display();
	QueueLinkedList();
	~QueueLinkedList();

};

