#include <iostream>
#include "factorial.h"

int main()
{
	int result = factorial(5);
	std::cout << "result =" << result << std::endl;
	return 0;
}

int factorial(int n)
{
	if (n > 1)
		return n * factorial(n - 1);
	return 1;
}
