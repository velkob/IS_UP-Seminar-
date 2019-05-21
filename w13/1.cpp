#include "pch.h"
#include <iostream>

const int SIZE = 1000;

int recStrLen(const char *arr)
{
	if (*arr == '\0')
	{
		return 0;
	}
	return 1 + recStrLen(arr + 1);
	
}

bool areEqual(char *arr, char *arr2)
{
	if (*arr == '\0' && *arr == '\0')
	{
		return 1;
	}

	if (*arr == *arr2)
	{
		return areEqual(arr + 1, arr2 + 1);
	}
	
	return 0;
}
int main()
{
	char arr[SIZE],arr2[SIZE];
	std::cin >> arr >> arr2;
	std::cout << areEqual(arr,arr2) << std::endl;
}

