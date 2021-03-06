#include "pch.h"
#include <iostream>
const int SIZE = 100;

void input(int *arr,int size)
{
	for (int i = 0; i < size; i++)
	{
		std::cin >> arr[i];
	}
}

void reverse(int *arr, const int size)
{
	int swp = 0;
	for (int i = 0; i < size/2; i++)
	{
		swp = arr[i];
		arr[i] = arr[size - 1 - i];
		arr[size - 1 - i] = swp;
	}
}

void output(int *arr, const int size)
{
	input(arr, size);
	reverse(arr, size);
	for (int i = 0; i < size; i++)
	{
		std::cout << arr[i] << std::endl;
	}
}
int main()
{
	int a[SIZE];
	int size = 0;
	std::cin >> size;
	output(a, size);
}

