#include <iostream>
#include <string>

//! [003]
struct MyStructIn
{
  // integral => OK
  int i = 42;
  // integral + const => OK
  const int ci = 42;
  // integral + static => ERROR
  // ISO C++ forbids in-class initialization of non-const static member
  // static int si = 42;
  // integral + const + static => OK
  static const int sci = 42;

  // non-integral => OK
  double f = 0.42;
  // non-integral + const => OK
  const double cf = 0.42;
  // non-integral + static => ERROR
  // static float sf = 0.42;
  // non-integral + const + static => ERROR
  // static const float scf = 0.42;

  // string => OK
  std::string s = "42";
  // const string => OK
  const std::string cs = "42";
  // static string => ERROR
  // static std::string ss = "42";
  // static const string => ERROR
  // static const std::string scs = "42";
};

struct MyStructOut
{
  MyStructOut()
    : i(42), ci(42), f(0.42), cf(0.42), s("42"), cs("42")
  {
  }

  int i;
  const int ci;
  static int si;
  static const int sci;

  double f;
  const double cf;
  static double sf;
  static const double scf;

  std::string s;
  const std::string cs;
  static std::string ss;
  static const std::string scs;
};
// nonstatic data member cannot be defined outside class
// int MyStructOut::i = 42;
// const int MyStructOut::ci = 42;
int MyStructOut::si = 42;
const int MyStructOut::sci = 42;

// nonstatic data member cannot be defined outside class
// float MyStructOut::f = 0.42;
// const float MyStructOut::cf = 0.42;
double MyStructOut::sf = 0.42;
const double MyStructOut::scf = 0.42;

// nonstatic data member cannot be defined outside class
// std::string MyStructOut::s = "42";
// const std::string MyStructOut::cs = "42";
std::string MyStructOut::ss = "42";
const std::string MyStructOut::scs = "42";

int main()
{
  return 0;
}
//! [003]