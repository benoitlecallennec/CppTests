#include <iostream>

//! [003]
struct MyStruct
{
  static const int constOk = 1;

  // ISO C++ forbids in-class initialization of non-const static member
  // static int notOk = 2; // <<== ERROR
  static int ok;
};

int MyStruct::ok = 2;

int main()
{
  std::cout << MyStruct::constOk << std::endl;
  std::cout << MyStruct::ok << std::endl;
  return 0;
}
//! [003]