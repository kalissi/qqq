#include <iostream>

int main ()
{
  setlocale(LC_ALL, "Russian");
  // меняем кирилицу на виндовс 1251
  int x = 5;
  int y = 3;
  char sign;
   std::cout << "Введите знак операции: ";
   std::cin >> sign;  
  int result = sign=='+'?x + y:x-y;
   std::cout << "Результат: " << result << "\n";
   return 0;
}
