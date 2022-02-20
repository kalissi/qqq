#include <string>
#include <iostream>


int main()
{
	std::string s1 = "hello";
	std::string s2 = "world";

	bool result = s1 != s2;
	result = s1 != "Hello";
	result = s1 != "hello";
	 // std::cout << bool(s1 != s1) << "\n";
	return 0;
}
