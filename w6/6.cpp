#include "pch.h"
#include <iostream>
//>156,
int main()
{
	int n = 0;
	int digits = 1;
	std::cin >> n;
	int temp = 156;
	while (temp)
	{
		int temp1 = temp;
		while (temp1 != 0)
		{
			digits *= temp1 % 10;
			temp1 /= 10;
		}
		if (digits!=0)
		{
			if (n%digits == 0)
			{
				std::cout << temp << std::endl;
				break;
			}
		}
		
		temp++;
		digits = 1;
	}
}

