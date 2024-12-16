// Day 4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Node.h"
#include "Tree.h"
using namespace std;


int main()
{
	Tree t;
	try {
		cout << "Minimum of tree :  " << t.findMin() << endl;
		cout << "Maximum of tree :  " << t.findMax() << endl;
	}
	catch (Exception e)
	{
		cout << e.name << endl;
	}
	t.add(50);
	t.add(40);
	t.add(30);
	t.add(35);
	t.add(32);
	t.add(37);
	t.add(70);
	t.add(60);
	t.add(65);
	try {
		cout << "Minimum of tree :  " << t.findMin() << endl;
		cout << "Maximum of tree :  " << t.findMax() << endl;
	}
	catch (Exception e)
	{
		cout << e.name << endl;
	}


	t.TraverseAll();

	try {
		cout << "Remove Root 50 - New root will be 40\n";
		t.remove(50);
		t.TraverseAll();

		cout << "\n\nRemove middle node (70)  dont has right - New root will be 60\n";

		t.remove(70);
		t.TraverseAll();


		cout << "\n\nRemove  middle node (35) has right and left - New root will be 32\n";
		t.remove(35);
		t.TraverseAll();

		cout << "\n\nRemove  node (90) not exist\n";
		t.remove(90);
		t.TraverseAll();


	}
	catch (Exception e)
	{
		cout << e.name << endl;
	}



	cout << "\n\n max Depth :  " << t.maxDepth();

}

