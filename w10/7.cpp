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

void toBinary(int *arr, int size)
{
	
	for (int i = 0; i < size; i++)
	{
		long long digits[SIZE] = { 0 }, multi = 1, binaryNum = 0, counter = 0;
		if (arr[i]==1)
		{
			digits[counter] = 0;
			digits[counter + 1] = 1;
			continue;
		}
		if (arr[i]==0)
		{
			digits[counter] = 0;
			continue;
		}
		while (arr[i] >= 0)
		{
			digits[counter] = arr[i] % 2;
			arr[i] /= 2;
			counter++;
			if (arr[i] == 1)
			{
				digits[counter] = 1;
				break;
			}

		}
		for (int j = 0; j <= counter; j++)
		{
			binaryNum += digits[j] * multi;
			multi *= 10;

		}
		arr[i] = binaryNum;
	}
}
//void output(int *arr, int size)
//{
//	input(arr, size);
//	toBinary(arr, size);
//	for (int i = 0; i < size; i++)
//	{
//		std::cout << arr[i] << std::endl;
//	}
//}
int *check(int *arr, int size,int number)
{
	input(arr, size);
	toBinary(arr, size);

	for (int i = 0; i < size; i++)
	{
		if (number==arr[i])
		{
			return (arr + i);
		}
	}
	arr = NULL;
	return  arr;
}
int main()
{
	int arr[SIZE] = { 0 };
	int size = 0;
	int number = 0;
	std::cout << "Enter the size of the array: ";
	std::cin >> size;
	std::cout << "Enter a number: ";
	std::cin >> number;
	long long digits[SIZE] = { 0 }, multi = 1, binaryNum = 0, counter = 0;
	for (int i = 0; i < 1; i++)
	{
		if (number == 1)
		{
			digits[counter] = 1;
			continue;
		}
		if (number == 0)
		{
			digits[counter] = 0;
			continue;
		}
		while (number >= 0)
		{
			digits[counter] = number % 2;
			number /= 2;
			counter++;
			if (number == 1)
			{
				digits[counter] = 1;
				break;
			}

		}
	}
	for (int j = 0; j <= counter; j++)
	{
		binaryNum += digits[j] * multi;
		multi *= 10;

	}
	number = binaryNum;
	//output(arr, size);
	std::cout << check(arr, size, number) << std::endl;
}

