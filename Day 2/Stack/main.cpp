// Day 2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "stackArray.h"
#include "StackLinkedList.h"
#include "Exception.h"

using namespace std;
int main()
{

	std::cout << "Stack Array\n";
	stackArray s(5);

	
	try
	{

		s.push(1);
		s.push(2);
		s.push(3);
		s.push(4);
		s.push(5);
		s.push(6);
	}
	catch (const Exception& e)
	{
		cout << "trying to push element out of range\n";
		std::cerr << " Message: " << e.name << std::endl;
	}
	s.Display();

	cout << "Stack after all elements deleted except the last one \n";
	int data;

	try
	{

		s.pop(data);
		s.pop(data);
		s.pop(data);
		s.pop(data);
	}
	catch (const Exception& e)
	{
		cout << "trying to pop element out of range\n";
		std::cerr << " Message: " << e.name << std::endl;
	}
	s.Display();
	cout << "Stack after all elements deleted \n";

	try
	{

		s.pop(data);
		s.pop(data);
	}
	catch (const Exception& e)
	{
		cout << "trying to pop element out of range\n";
		std::cerr << " Message: " << e.name << std::endl;
	}
	try
	{

		s.peek(data);
	}
	catch (const Exception& e)
	{
		cout << "trying to dispaly peak element out of range\n";
		std::cerr << " Message: " << e.name << std::endl;
	}



	cout << "=====================================================\n";
	std::cout << "Stack LinkedList\n";

	StackLinkedList ls;
	ls.push(10);

	ls.push(20);
	ls.Display();
	cout << "Stack after all elements deleted \n";

	try
	{

		ls.pop(data);
		ls.pop(data);
		ls.peek(data);
	}
	catch (const Exception& e)
	{
		cout << "trying to pop element out of range\n";
		std::cerr << " Message: " << e.name << std::endl;
	}
	






}


