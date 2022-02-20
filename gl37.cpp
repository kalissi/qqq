#include <iostream>

void display();

int main()
{
	display();
	display();
	display();
	return 0;
}

void display()
{
	static int i = 0;
	i++;
	std::cout << "i=" << i << std::endl;
}
    // хотел вывести в два столбика (получилось))).
	// static int n = 20; записал как новую переменную с именем новым.
	//  n++; добавил действие на 1 больше.
	//  std::cout << ' ' << "n=" << n << std::endl; добавил в вывод.

// 2ой варик просто в первой строке дописать через запятую переменную и дописать остаток в вывод.
// static int i = 0, n = 20;
// i++;n++;
// std::cout << "i=" << i << ' ' << "n=" << n << std::endl;