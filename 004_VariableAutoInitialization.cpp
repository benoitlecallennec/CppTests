#include <iostream>

//! [004]
int x = 99;

int main()
{
  // Undefined behavior: x is initialized with itself
  int x = x;

  std::cout << x << std::endl;
  return 0;
}
//! [004]