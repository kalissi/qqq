#include <iostream>

void hello();

int main()
{
	hello();
	hello();
	return 0;
}

void hello()
{
	std::cout << "hello\n";
}
// можно просто взять перед main обьявить void (жулье какоето)