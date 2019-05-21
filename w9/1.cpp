#include "pch.h"
#include <iostream>
const int SIZE = 100;

void reverse(int arr[], int size)
{
	int emptyBox = 0;
	for (int i = 0; i < size/2; i++)
	{
		emptyBox = arr[i];
		arr[i] = arr[size - i-1];
		arr[size - i-1] = emptyBox;
	}
	for (int i = 0; i < size; i++)
	{
		std::cout << arr[i] << ' ';
	}
	std::cout << std::endl;
}
void input(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		std::cout << "Enter arr[" << i << "] = ";
		std::cin >> arr[i];
	}
}
int sumOfDividers(int number)
{
	int sum = 0;
	for (int i = 0; i <=number/2; i++)
	{
		if (number%i==0)
		{
			sum += i;
		}
	}
	return sum;
}
void perfectNumbers(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		if (sumOfDividers(arr[i])==arr[i])
		{
			std::cout << "is Perfect" << std::endl;
		}
	}
}
int main()
{
	int arr[SIZE] = { 0 };
	int n = 0;
	std::cout << "Enter n: ";
	std::cin >> n;
	input(arr, n);
	reverse(arr, n);
	perfectNumbers(arr, n);
}

