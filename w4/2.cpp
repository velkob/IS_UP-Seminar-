#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int size;
	cin >> size;
	for (int row = 0; row <= size; row++)
	{
		for (int space = size; space > row; space--)
		{
			cout << " ";
		}
		for (int number = 1; number <= row;number++)
		{
			cout <<" "<< number;
		}
		cout << endl;

	}
}

