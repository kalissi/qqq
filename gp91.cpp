#include <iostream>

int main ()
{
  const int n = 4;
  int numbers[n] = {1,2,3,4};
  std::cout << numbers [n] << std::endl;
  numbers[n] = 3;
  std::cout << numbers [n] << std::endl;
  return 0;
}
