#include "pch.h"
#include <iostream>
const int MAX_SIZE = 10;
int main()
{
	int matrix[MAX_SIZE][MAX_SIZE] = { 0 };
	int rows = 0, colums = 0;
	std::cout << "Enter rows: ";
	std::cin >> rows;
	std::cout << "Enter colums: ";
	std::cin >> colums;
	for (size_t i = 0; i < rows; i++)
	{
		for (int j = 0; j < colums; j++)
		{
			std::cin >> matrix[i][j];
		}
	}
	for (size_t i = 0; i < rows; i++)
	{
		for (int j = 0; j < colums; j++)
		{
			for (int temp = 0; temp < rows; temp++)
			{
				if ((matrix[i][j]%matrix[temp][j]==0)&&(matrix[i][j]!=matrix[temp][j]))
				{
					std::cout << matrix[i][j] <<" % "<< matrix[temp][j] <<" = 0"<< std::endl;
				}
				
			}
		}
	}
	/*for (size_t i = 0; i < rows; i++)
	{
		for (size_t j = 0; j < colums; j++)
		{
			std::cout << matrix[i][j] << " ";
		}
		std::cout << std::endl;
	}*/
}

