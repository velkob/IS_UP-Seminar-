#include "pch.h"
#include <iostream>
const int SIZE = 100;
void input(int *arr, int &size)
{
	std::cin >> size;

	for (int i = 0; i < size; i++)
	{
		std::cin >> arr[i];
	}
}


bool isSorted(int *arr, int &size)
{
	for (int i = 0; i < size-1; i++)
	{
		if (arr[i]>arr[i+1])
		{
			return false;
		}
	}
	return true;
}

bool allEven(int *arr, int &size)
{
	input(arr, size);
	for (int i = 0; i < size; i++)
	{
		if (arr[i] % 2 != 0 || !isSorted(arr, size))
		{
			return false;
		}
	}
	
	return true;
}

void max(int *arr, int &size, int *max)
{
	for (int i = 0; i < size; i++)
	{
		if (arr[i]>*max)
		{
			*max = arr[i];
		}
	}
	std::cout << *max << std::endl;
}

int main()
{
	int min = INT_MIN;
	int size = 0;
	int arr[SIZE] = { 0 };

	std::cout << allEven(arr, size) << std::endl;
	//max(arr, size, &min);
}

