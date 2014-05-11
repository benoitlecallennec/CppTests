#include <iostream>

int x = 99;

int main()
{
  int x = x;

  // Undefined behavior: x is initialized with itself
  std::cout << x << std::endl;
  return 0;
}