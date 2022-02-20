#include <iostream>

int main()
{
	int n = 2;
	{
		int x = 5;
		std::cout << "x=" << x << std::endl;
	    n++;
	}
	std::cout << "n=" << n << std::endl;
	return 0;
} 