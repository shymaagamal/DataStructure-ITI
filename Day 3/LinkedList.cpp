#include "LinkedList.h"
#include <iostream>
using namespace std;
LinkedList::LinkedList()
{
	this->head= nullptr;
	this->tail = nullptr;
}

LinkedList::~LinkedList()
{

}


void LinkedList::addNode(int data_)
{
	Node* newNode = new Node(data_);
	if (head == nullptr) 
	{
		head = tail = newNode;
		return;
	}
	tail->next = newNode;
	newNode->prev = tail;
	tail = newNode;
}


void LinkedList::display()
{
	Node* current = this->head;
	if (current == nullptr)
	{
		cout << "Linkedlist  is Empty\n";
		return;
	}

	while (current != nullptr)
	{
		cout  << current->data <<" -->  ";
		current = current->next;
	}
	cout << endl;
}

void LinkedList::Remove(int _data)
{
	Node* node = GetNode(_data);
	if (head == nullptr)
	{
		return;
	}
	if (head ==node)
	{
		if (head == tail)
		{
			head = tail = nullptr;
			return;
		}
		else
		{
			head = head->next;
			head->prev = nullptr;
		}

	}
	else
	{
		
		node->next->prev = node->prev;
		node->prev->next = node->next;

	}
	delete node;

}
void LinkedList::swapNodes(int _data)
{
	Node* node = GetNode(_data);
	if (node == nullptr || node->next == nullptr)
		return;

	Node* AfterNode = node->next;

	Remove(_data);
	InsertAfter(_data, AfterNode->data);



}
void LinkedList::bubbleSortingList()
{
	int length = GetCountNode();
	if (head == nullptr)
		return;
	for (int i = 0; i < length-1; i++)
	{

		Node* curr = head;
		for (int j = 0; j < length - i - 1; j++)
		{
			if (curr->data > curr->next->data)
			{
				Node* nextNode = curr->next;
				swapNodes(curr->data);
				curr = nextNode;
			}
	
			curr = curr->next;
		}

	}

}
Node* LinkedList::GetNode(int data_)
{
	Node* current = this->head;
	while (current != nullptr)
	{
		if (current->data == data_)
		{
			return current;
		}
		current = current->next;
	}
	return nullptr;

}

void LinkedList::InsertAfter(int data, int afterData)
{
	Node* nodeafter = GetNode(afterData);
	
	if (nodeafter == nullptr)
	{
		this->addNode(data);
	}
	else
	{
		Node* newNode = new Node(data);
		newNode->next = nodeafter->next;
		newNode->prev = nodeafter;
		if (nodeafter->next != nullptr)
		{

			nodeafter->next->prev = newNode;
		}
		else
		{
			tail = newNode;
		}
		nodeafter->next = newNode;
	}

}

void LinkedList::InsertBefore(int data, int beforeData)
{
	Node* nodebefore= GetNode(beforeData);

	if (nodebefore == nullptr)
	{
		this->addNode(data);
	}
	else if (nodebefore == head)
	{
		Node* newNode = new Node(data);

		newNode->next = head;
		newNode->prev = nullptr;
		head->prev = newNode;
		head= newNode;
	}
	else
	{
		Node* newNode = new Node(data);

		newNode->next = nodebefore;
		newNode->prev = nodebefore->prev;
		nodebefore->prev->next = newNode; 
		nodebefore->prev = newNode;

	}
}

int LinkedList::GetCountNode()
{
	int count = 0;
	Node* current = this->head;
	if (current == nullptr)
	{
		cout << "Linkedlist  is Empty\n";
		return 0;
	}
	while (current != nullptr)
	{
		count++;
		current = current->next;
	}
	cout << endl;

	return count;
}

int LinkedList::GetDataByIndex(int index)
{

	int count = 0;
	Node* current = this->head;
	if (current == nullptr)
	{
		cout << "Linkedlist  is Empty\n";
		return 0;
	}
	while (current != nullptr)
	{
		if (count == index)
		{
			return current->data;
		}
		else
		{
			count++;
			current = current->next;

		}
	}
	throw std::out_of_range("Index out of range.");


}


