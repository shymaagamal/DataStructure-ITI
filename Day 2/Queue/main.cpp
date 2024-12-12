// Day 2-Queue.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "QueueLinkedList.h"
#include "QueueArray.h"
#include <iostream>
using namespace std;

int main()
{

	std::cout << "	Queue Array \n";
	queueArray q(2);
	try
	{

		q.enQueue(10);

		q.enQueue(20);
		q.Display();
		q.enQueue(30);
	}
	catch (const Exception& e)
	{
		cout << "trying to PUSH element out of range\n";
		std::cerr << " Message: " << e.name << std::endl;
	}
	
	int d = 0;
	try
	{

		q.deQueue(d);
		cout << "Queue after one element deleted \n";

		q.Display();

		cout << "Queue after all elements deleted \n";
		q.deQueue(d);
		q.deQueue(d);
	}
	catch (const Exception& e)
	{
		cout << "trying to pop element out of range\n";
		std::cerr << " Message: " << e.name << std::endl;
	}


	cout << "=====================================================\n";
	std::cout << "	Queue LinkedList\n";

	QueueLinkedList lq;
	lq.enQueue(10);

	lq.enQueue(20);
	lq.Display();
	int data = 0;
	try
	{

		lq.deQueue(data);
		cout << "Queue after one element deleted \n";

		lq.Display();

		cout << "Queue after all elements deleted \n";
		lq.deQueue(data);
		lq.deQueue(data);
	}
	catch (const Exception& e)
	{
		cout << "trying to pop element out of range\n";
		std::cerr << " Message: " << e.name << std::endl;
	}






}
