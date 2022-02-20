#include <iostream>

int main ()
{
	int i = 1;
	for ( ; ; )
	{
		std::cout << i << " * " << i << " = " << i << i * i << std::endl;
		i++;
		if (i > 9) break;
	}
	return 0;
}
