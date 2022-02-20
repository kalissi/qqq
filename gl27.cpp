#include <iostream>

void factorial(int);

int main()
{
	factorial(-3);
	factorial(5);
	factorial(4);
	return 0;
}
void factorial(int n)
{
	if(n<1)
	{
		std::cout << "Incorrect number " << std::endl;
		return;
	}
	int result = 1;
	for(int i = 1; i <=n; i++)
	{
		result *= i;
	}
	std::cout << "Factorrial of " << n << ' ' << "is equal to" << result << std::endl;
	// можно за мест is equal to просто в ковычках =
}

