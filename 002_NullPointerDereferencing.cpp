//! [002]
#include <iostream>

class A
{
protected:
  int m_int;

public:
  A() :m_int(9)
  {
  }
  void foo()
  {
    std::cout << "foo" << std::endl;
  }
  void bar()
  {
    std::cout << "bar " << m_int << std::endl;
  }
};

int main()
{
  A *a = nullptr;

  // Dereferencing null pointer is an undefined behavior
  a->foo(); // <<== UB, but still "works"

  a->bar(); // <<== runtime error

  return 0;
}
//! [002]
