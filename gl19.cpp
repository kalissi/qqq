#include <iostream>

void multiply(int n, int m = 3)
{
	int result = n * m;
	std::cout << "n * m = " << result << std::endl;
}
int main()
{
	multiply(4, 5);
	multiply(4);
	return 0;
}


