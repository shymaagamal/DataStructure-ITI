#pragma once
#include "Node.h"
#include "Exception.h"

class Tree
{
private:

	Node* root;
	Node* getNodeByDate(int data);
	Node* getParent(Node* node);
	Node* getMaxRight(Node* node);
	void Traverse(Node* node);
	int maxDepthCal(Node* node);
public:
	void add(int data);
	int getParentByDate(int data);
	void TraverseAll();

	void remove(int data);

	int maxDepth();
	int findMax();
	int findMin();
	Tree();
	~Tree();

};

