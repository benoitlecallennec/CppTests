#include <iostream>
#include <vector>

//! [005]
const int x = 10;
const int y = 10;

int main()
{
  // Prints 10
  // The variable x is effectively declared when declaration is done.
  // So double x[x] is the same as double x[10]
  double x[x];
  std::cout << sizeof(x) / sizeof(double) << std::endl;

  std::vector<double> y(y);
  std::cout << y.size() << std::endl;

  std::vector<double> y2(10);
  std::cout << y2.size() << std::endl;

  return 0;
}
//! [005]