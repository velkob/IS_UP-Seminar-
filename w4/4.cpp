#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int size;
	cin >> size;
	for (int row = 0; row < size; row++)
	{
		for (int col = 0; col < size; col++)
		{
			cout << '*';
		}
		cout << endl;
	}
}

