#include <iostream>

void square(int, int);

int main()
{
	const int a = 4;
	const int b = 5;
	square(a, b);
	return 0;
}
void square(int a, int b)
{
	a = a * a;
	b = b * b;
	std::cout << "In square: a * b = " << a * b << std::endl;
}
