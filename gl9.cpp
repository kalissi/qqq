#include <string>
#include <iostream>

int main()
{
	std::string hello = "Hello";
	char c = hello[1];
	hello[0]='M';
	std::cout << hello << std::endl;
    return 0;
}
