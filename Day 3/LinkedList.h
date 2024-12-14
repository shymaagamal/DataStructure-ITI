#pragma once
#include "Node.h"


class LinkedList
{


private: 
	Node* head;
	Node* tail;

	//Helper Function
	Node* GetNode(int data_);

public:
	void addNode(int data_);
	void display();
	void Remove(int _data);
	void InsertAfter(int data, int afterData);
	void InsertBefore(int data, int beforeData);
	int GetDataByIndex(int index);
	int GetCountNode();
	void swapNodes(int _data);

	void bubbleSortingList();


	LinkedList();
	~LinkedList();

};

