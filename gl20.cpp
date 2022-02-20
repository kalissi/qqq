#include <iostream>

void myltiply(int n, int m=3);

int main()
{
	myltiply(4, 5);
	myltiply(4,);
	return 0;
}
void myltiply(int n, int m)
{
	int result = n * m;
	std::cout << "n * m = " << result << std::endl;
}
