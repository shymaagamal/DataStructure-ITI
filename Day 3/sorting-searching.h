#pragma once

#include "linkedList.h"

void arrSwap(int& x, int& y);

void display(int* arr, int size);
void bubbleSort(int* arr, int size);
void SelectionSort(int* arr, int size);
int  LinearSearch(int* arr, int size, int item);
int binearySearch(int* arr, int size, int item);

int* LinearSearchM(int* arr, int size, int item, int& occurrences);

