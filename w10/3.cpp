#include "pch.h"
#include <iostream>

const int SIZE = 100;

void Delete(char *arr)
{
	for (int i = 0; arr[i] !='\0'; i++)
	{
		if (arr[i]=='a'||arr[i]=='e'||arr[i]=='i'||arr[i]=='o'||arr[i]=='u')
		{
			for (int j = i; arr[j] !='\0'; j++)
			{
				arr[j] = arr[j + 1];
			}
			i--;
		}
		if (arr[i+1]=='\0'&&(arr[i] == 'a' || arr[i] == 'e' || arr[i] == 'i' || arr[i] == 'o' || arr[i] == 'u'))
		{
			arr[i] == '\0';
		}
	}
}

void output(char *arr)
{
	Delete(arr);
	for (int i = 0; arr[i] !='\0'; i++)
	{
		std::cout << arr[i];
	}
}
int main()
{
	char arr[SIZE] = { 0 };
	std::cin >> arr;
	output(arr);
}

