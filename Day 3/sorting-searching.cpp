#pragma once
#include "sorting-searching.h"
#include<iostream>
using namespace std;




void arrSwap(int& x, int& y)
{
    int temp = x;
    x = y;
    y = temp;

}
void display(int* arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << "  ";
    }
    cout << endl;
}
void bubbleSort(int* arr, int size)
{
    for (int j = 0; j < size - 1; j++)
    {
        for (int i = 0; i < size - 1 - j; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                arrSwap(arr[i], arr[i + 1]);
            }
        }

    }

}


void SelectionSort(int* arr, int size)
{
    int miniIndex = 0;
    for (int i = 0; i < size - 1; i++)
    {
        miniIndex = i;
        for (int index = i + 1; index < size; index++)
        {
            if (arr[index] < arr[miniIndex])
                miniIndex = index;
        }
        cout << "Mini Index  " << miniIndex << endl;
        arrSwap(arr[miniIndex], arr[i]);
    }


}

int  LinearSearch(int* arr, int size, int item)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == item)
        {
            return i;
        }
    }
    return -1;
}


int* LinearSearchM(int* arr, int size, int item, int& occurrences)
{
    int* occur = new int[size];
    occurrences = 0;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == item)
        {
            occur[occurrences] = i;
            occurrences++;


        }
    }
    if (occurrences == 0)
        return nullptr;

    return occur;
}

int binearySearch(int* arr, int size, int item)
{
    int start = 0, end = size - 1, mid = 0;
    while (start <= end)
    {
        mid = (start + end) / 2;
        if (arr[mid] == item)
        {
            return mid;
        }
        else if (arr[mid] < item)
        {
            start = mid + 1;

        }
        else if (arr[mid] > item)
        {
            end = mid - 1;

        }
    }
    return -1;

}

