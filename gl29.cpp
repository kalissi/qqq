#include <iostream>

int factorial(int);

int main()
{
	int n = 5;
	int result = factorial(n);
	std::cout << "Factorial of " << n << " is aqual to " << result << std::endl;
	return 0;
}
int factorial(int n)
{
	int result = 1;
	for(int i = 1; i <= n; i++)
	{
		result *= i;
	}
	return result;
}
// для преобразования сылки нужно int factorial(int &), int factorial(int &n)(просто добавь аперанду).

