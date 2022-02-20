#include <iostream>

void print(int);

int main()
{
	int z = 2;
	print(z);
	return 0;
}

void print(int x)
{
	int n = 5 * x;
	std::cout << "n=" << n << std::endl;
}

