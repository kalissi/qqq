#include <iostream>

int main ()
{
  setlocale(LC_ALL, "Russian");
  // ������ �������� �� ������� 1251
  int x = 5;
  int y = 3;
  char sign;
   std::cout << "������� ���� ��������: ";
   std::cin >> sign;  
  int result = sign=='+'?x + y:x-y;
   std::cout << "���������: " << result << "\n";
   return 0;
}
