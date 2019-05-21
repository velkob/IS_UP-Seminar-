
#include "pch.h"
#include <iostream>

int main()
{
	int number = 1,n=0;
	const short multiplier = 10;
	std::cin >> n;
	std::cout << 1;
	for (int i = 1; i <= n; i++)
	{
		
		number =multiplier*number+1;
		if (i < n);
		{
			std::cout <<" + ";
		}
		std::cout << number;
	}
	
}

