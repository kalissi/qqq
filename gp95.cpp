#include <iostream>

int main ()
{
	int numbers[3][2] = { {1, 2}, {3, 4}, {5, 6} };
	std::cout << numbers[1][0] << std::endl;
	numbers[1][0] = 12;
    std::cout << numbers[1][0] << std::endl;
     return 0;
}

	