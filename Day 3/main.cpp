
#include <iostream>
#include "sorting-searching.h"
using namespace std;

int main()
{

    int arr[6] = { 5,4,3,1,2,8 };
    display(arr, 6);
    int index = LinearSearch(arr, 6, 3);
    cout << "using LinearSearch for finding item 3\n";
    cout << "index of item:  " << index << endl;
    cout << "using LinearSearch for finding item 70\n";

    index = LinearSearch(arr, 6, 70);
    cout << "index of item:  " << index << endl;



    cout << "\n\n======================================= multiple occurrences of the target element=================================\n\n";

    int occurrences = 0;
    int arr2[8] = { 5,4,5,1,7,5,5,5 };
    display(arr2, 8);

    int* listIndices = LinearSearchM(arr2, 8, 5, occurrences);
    if (listIndices != nullptr)
    {
        display(listIndices, occurrences);
    }

    cout << "\n\n======================================= Binary Search Algorithm =================================\n\n";

    display(arr, 6);
    bubbleSort(arr, 6);
    int element = binearySearch(arr, 6, 4);
    cout << "index:  " << element <<endl;


    cout << "\n\n======================================= BubbleSort LinkedList=================================\n\n";

    LinkedList l;
    l.addNode(5);
    l.addNode(4);
    l.addNode(3);
    l.addNode(8);
    l.addNode(2);
    l.addNode(1);
    l.display();

    l.bubbleSortingList();
    l.display();





}

