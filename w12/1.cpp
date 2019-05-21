#include "pch.h"
#include <iostream>

int num(int number)
{
	if (number==0)
	{
		return 0;
	}

	return number % 10 + num(number / 10);
}

bool numInArr(int *arr, int size, int number)
{
	if (size == 0)
	{
		return 0;
	}
	std::cout << "hola";
	if (number == arr[size-1])
	{
		return 1;
	}

	

	return numInArr(arr, size-1, number);
}
int main()
{
	int n;
	int arr[6] = { 1,2,3,4,5,7 };
	std::cin >> n;
	std::cout << numInArr(arr,6,n) << std::endl;
}

