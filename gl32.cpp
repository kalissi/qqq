#include <iostream>

void print();

int n = 5;
int main()
{
	print();
	n++;
	std::cout << "n=" << n << std::endl;
	return 0;
}

void print()
{
	n++;
	std::cout << "n=" << n << std::endl;
}
