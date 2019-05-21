#include "pch.h"
#include <iostream>
const int SIZE = 100;

void input(double *arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		std::cin >> arr[i];
	}
}

void searchEng(double *arr, int size)
{
	input(arr, size);
	bool flag = 1;
	for (int i = size-1; i >= 0; i--)
	{
		if (i==size-1)
		{
			if (arr[size-1]==arr[size-2])
			{
				std::cout << size-1;
				flag = 0;
				break;
			}
		}
		else if (i==0)
		{
			if (arr[0]==arr[1])
			{
				std::cout << 0;
				flag = 0;
				break;
			}
		}
		else
		{
			if (arr[i]==(arr[i-1]+arr[i+1])/2)
			{
				std::cout <<i;
				flag = 0;
				break;
			}
		}
	}
	if (flag)
	{
		std::cout << 1;
	}
}
int main()
{
	double arr[SIZE] = { 0 };
	int size = 0;
	std::cin >> size;
	searchEng(arr, size);
}

