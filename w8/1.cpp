#include "pch.h"
#include <iostream>
const int SIZE = 300;
void inputMatrix(int arr[SIZE][SIZE])
{
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE; j++)
		{
			std::cin >> arr[i][j];
		}
	}
}
void outputMatrix(int arr[SIZE][SIZE])
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			std::cout << arr[i][j]<<" ";
		}
		std::cout << std::endl;
	}
}
int main()
{
	int matrix[SIZE][SIZE] = { 0 };
	int rows = 0, sum1 = 0, sum2 = 0, sum3 = 0, sum4 = 0, maxSum = 0, sum5 = 0;
	std::cout << "Enter amount of rows/colums: ";
	std::cin >> rows;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < rows; j++)
		{
			std::cin >> matrix[i][j];
			if (i<j)
			{
				sum1 += matrix[i][j];
			}
			if (i>j)
			{
				sum2 += matrix[i][j];
			}
			if (i + j < rows - 1)
			{
				sum3 += matrix[i][j];
			}
			if (i + j > rows - 1)
			{
				sum4 += matrix[i][j];
			}
			
		}
	}
	std::cout << std::endl;
	std::cout << "The sum of numbers above the main diagonal is: "<< sum1 << std::endl;
	std::cout << "The sum of numbers below the main diagonal is: "<<sum2 << std::endl;
	std::cout << "The sum of numbers above the opposite diagonal is: " << sum3 << std::endl;
	std::cout << "The sum of numbers below the opposite diagonal is: " << sum4 << std::endl;

	std::cout << "=====================ODD NUMBERS ON EVEN ROWS======================================\n";
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < rows; j++)
		{
			if (!(i % 2) && (matrix[i][j] % 2))
			{
				std::cout << matrix[i][j] << " ";
				std::cout << "Is an odd number on an even row." << std::endl;
			}
		}
	}

	std::cout << "======================================================COLUM SUM======================================\n";
	for (int j = 0; j < rows; j++)
	{
		for (int i = 0; i < rows; i++)
		{
			sum5+=matrix[i][j];
		}
		if (sum5>maxSum)
		{
			maxSum = sum5;
		}
		sum5 = 0;
	}
	std::cout << "The biggest sum of numbers in a colum is: " << maxSum << std::endl;
	std::cout << "================================BONUS TASK===================================\n";
	for (int i = 0; i < rows; i+=2)
	{
		if ((rows % 2) && (i == rows - 1))
		{
			std::cout << "Last line..." << std::endl;
			break;
		}
		int sumofevens = 0;
		int multiofodds = 1;
		for (int j = 0; j < rows; j++)
		{
			sumofevens += matrix[i][j];
			multiofodds *= matrix[i + 1][j];
		}
		if (multiofodds>sumofevens)
		{
			std::cout << "YES!" << std::endl;
		}
	}
}

