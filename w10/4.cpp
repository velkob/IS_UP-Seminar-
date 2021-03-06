#include "pch.h"
#include <iostream>
#include<string.h>
const int SIZE = 100;


void input(int *arr1, int size1, int *arr2, int size2)
{
	for (int i = 0; i < size1; i++)
	{
		std::cin >> arr1[i];
	}
	for (int i = 0; i < size2; i++)
	{
		std::cin >> arr2[i];
	}
}

void combination(int *arr1, int size1, int *arr2, int size2, int *arr3)
{
	for (int i = 0, j = 0, k = 0; k < size1 + size2;)
	{
		if (arr1[i] < arr2[j] && i < size1)
		{
			arr3[k] = arr1[i];
			k++;
			if (i<size1-1)
			{
				i++;
			}
			else
			{
				arr1[i] = INT_MAX;
			}
			
		}
		else if (arr1[i] > arr2[j] && j < size2)
		{
			arr3[k] = arr2[j];
			k++;
			if (j < size2 - 1)
			{
				j++;
			}
			else
			{
				arr2[j] = INT_MAX;
			}
			
		}
		else //(arr1[i] == arr2[j] && i <= size1 && j < size2)
		{
		
			arr3[k] = arr1[i];
			arr3[k + 1] = arr2[j];
			k += 2;
			i++;
			j++;
		}
	}
}
	void output(int *arr1, int size1, int *arr2, int size2, int *arr3)
	{
		input(arr1, size1, arr2, size2);
		combination(arr1, size1, arr2, size2, arr3);
		for (int i = 0; i < size1+size2; i++)
		{
			std::cout << arr3[i] <<" ";
		}
		std::cout<<std::endl;
	}

int main()
{
	
	int arr1[SIZE] = { 0 };
	int arr2[SIZE] = { 0 };
	int size1 = 0, size2 = 0;
	std::cin >> size1 >> size2;
	int combinedArrs[SIZE] = { 0 };
	output(arr1, size1, arr2, size2,combinedArrs);
}

