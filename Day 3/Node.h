#pragma once
class Node
{
private:

public:
	int data;
	Node* prev;
	Node* next;
	Node(int data);
	~Node();
};

