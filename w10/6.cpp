#include "pch.h"
#include <iostream>
const int SIZE = 100;

void input(int *arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		std::cin >> arr[i];
	}
}
bool removal(int *arr, int size,int number)
{
	input(arr, size);
	bool flag = 1;
	for (int i = 0; i < size; i++)
	{
		if (arr[i]==number)
		{
			return 0;
		}
	}
	return 1;
}
int main()
{
	int arr[SIZE] = { 0 };
	int size = 0, number = 0;
	std::cout << "Enter the size of the array: ";
	std::cin >> size;
	std::cout << "Enter a number: ";
	std::cin >> number;
	std::cout<<removal(arr, size, number)<<std::endl;
}

