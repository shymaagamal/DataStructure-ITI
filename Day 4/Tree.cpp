#include "Tree.h"
#include <iostream>
using namespace std;

Tree::Tree()
{
	this->root = nullptr;
}

void Tree::add(int data)
{
	Node* NewNode = new Node(data);
	if (root == nullptr)
	{
		root = NewNode;
	}
	else
	{
		Node* current = root;
		Node* parent = nullptr;
		while (current != nullptr)
		{
			parent = current;
			if (NewNode->data > current->data)
			{
				current = current->right;

			}
			else 
			{
				current = current->left;
			}
		}

		if (NewNode->data > parent->data)
		{
			parent->right = NewNode;
		}
		else
		{
			parent->left = NewNode;

		}

	}
}
void Tree:: remove(int data)
{
	Node* node = getNodeByDate(data);

	if (node == nullptr)
	{
		Exception e(101, "This data doesnt exist ");
		throw e;
	}
	else if(root== node)
	{

		if (root->left == nullptr && root->right==nullptr )
		{
			root = nullptr;

		}
		else if (root->left == nullptr)
		{
			root = root->right;
		}
		else if (root->right == nullptr)
		{
			root = root->left;
		}
		else
		{
			Node* mostRight = getMaxRight(root->left);
			mostRight->right = root->right;
			root = root->left;
		}
	}
	else
	{
		Node* parentNode = getParent(node);
		Node* NewChild = nullptr;

		if (node->left == nullptr && node->right == nullptr)
		{
	
	
			NewChild = nullptr;


		}
		else if (node->left == nullptr)
		{
	
			NewChild = node->right;
		}
		else if (node->right == nullptr)
		{
	
			NewChild = node->left;

		}
		else
		{
			Node* mostRight = getMaxRight(node->left);
			mostRight->right = node->right;
			NewChild = node->left;
	
		}
		if (parentNode->left == node)
		{
			parentNode->left = NewChild;
		}
		else
		{
			parentNode->right = NewChild;
		}
	}


}
void Tree::Traverse(Node* node)
{
	if (node == nullptr)
	{
		return;
	}
	Traverse(node->left);
	cout << node->data << " ";
	Traverse(node->right);


}
void Tree::TraverseAll()
{
	cout << "\n\n==== Display tree ==== \n";
	Traverse(root);
	cout << endl;
}
Node* Tree::getMaxRight(Node* node)
{
	Node* current = node;
	while (current->right != nullptr)
	{
		current = current->right;
	}
	return current;
}


Node* Tree::getNodeByDate(int data)
{
	Node* current = root;
	while (current != nullptr)
	{
		if (data == current->data)
		{
			return current;
		}
		else if (data > current->data)
		{
			current = current->right;
		}
		else
		{
			current = current->left;
		}
	}
	return nullptr;
}

Node* Tree::getParent(Node* node)
{
	Node* parent = root;
	while (parent != nullptr)
	{
		if (parent->left == node || parent->right == node)
		{
			return parent;
		}
		else if (node->data > parent->data)
		{
			parent = parent->right;
		}
		else
		{
			parent = parent->left;
		}
	}
	return nullptr;
}

int Tree::getParentByDate(int data)
{
	Node* node = getNodeByDate(data);
	if (node == root)
	{
		throw "Root not have parent";
	}
	if (node != nullptr)
	{
		Node* res = getParent(node);
		if (res != nullptr)
		{
			return res->data;
		}
	}
	throw "Not Found";
}
int Tree::maxDepthCal(Node* node)
{
	if (node == nullptr)
	{
		return 0;
	}
	int left = maxDepthCal(node->left);
	int right = maxDepthCal(node->right);

	return (left >right ? ++left: ++right);
}
int Tree:: maxDepth()
{
	return maxDepthCal(root);
}


int Tree::findMin()
{
	Node* current = root;
	if (root == nullptr)
	{
		Exception e(101,"tree is Empty");

		throw e;
	}
	else
	{
		while (current->left != nullptr)
		{
			current = current->left;
		}
	}
	return current->data;
	

}
int Tree::findMax()
{
	Node* current = root;
	if (root == nullptr)
	{
		Exception e(101,"tree is Empty");

		throw e;
	}
	else
	{
		while (current->right != nullptr)
		{
			current = current->right;
		}
	}
	return current->data;
	

}

Tree::~Tree()
{

}