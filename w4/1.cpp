#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int size;
	cin >> size;
	for (int i = 1; i <= size; i++)
	{
		for (int j = size; j >i; j--)
		{
			cout << " ";
		}
		for (int k = 1; k <= i; k++)
		{
			cout << k;
		}
		cout << endl;
	}
}

