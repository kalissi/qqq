#include <iostream>

int main()
{
	hello();
	hello();
	return 0;
}

void hello()
{
	ctd::cout << "hello\n";
}
// ошибка так как сначала вызывали а потом определяли (надо наоборот сразу определять а потом вызывать )