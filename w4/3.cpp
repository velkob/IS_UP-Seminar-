#include "pch.h"
#include <iostream>
#include"cmath"
using namespace std;

int main()
{
	int n;
	int sum=0;
	cin >> n;
	for (int i = 1; i <n; i++)
	{
		if (!(n%i))
		{
			sum += i;
		}
	}
	if (n == sum)
	{
		cout << n;
	}
	else
		cout << "Its not a perfect";
}

