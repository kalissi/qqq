#include <iostream>

int main ()
{
	int result = 0;
	for (int i=0; i<10; i++)
	{
		if (i % 2 == 0) continue;
		result +=i;
	}
	std::cout << "result = " << result << std::endl;
	return 0;
}
