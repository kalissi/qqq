#include <iostream>

void square(const int &, const int &);

int main()
{
	const int a = 4;
	const int b = 5;
	square(a, b);
	return 0;
}
void square(const int &a, const int &b)
{
	std::cout << "In square: a * b = " << a * b << std::endl;
}
