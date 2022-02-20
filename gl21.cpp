#include <iostream>

void square(int, int);

int main()
{
	int a = 4;
	int b = 5;
	std::cout << "Before square: a = " << a << "\tb=" << b << std::endl;
	square(a, b);
	std::cout << "After square: a = " << a << "\tb=" << b << std::endl;
	return 0;
}
void square(int a, int b)
{
	a = a * a;
	b = b * b;
	std::cout << "In square: a = " << a << "\tb=" << b << std::endl;
}


