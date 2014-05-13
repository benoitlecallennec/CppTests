#include <iostream>
#include <string>

//! [007]
int main()
{
  std::cout << "Reading integers" << std::endl;
  int integer;

  // Will continue until std::cin is reading correct input.
  // Stops as soon as we read something other than an int.
  while (std::cin >> integer)
  {
    std::cout << integer << std::endl;
  }

  // std::cin is invalid so clear it before continuing
  // SEE: http://stackoverflow.com/questions/478258/why-is-this-cin-reading-jammed
  std::cin.clear();
  std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

  // EOF is Ctrl+D (Unix) or Ctrl+Z (Windows)
  std::cout << "Reading strings until EOF" << std::endl;
  std::string inStr;

  while (std::cin >> inStr)
  {
    std::cout << inStr << std::endl;
  }

  return 0;
}
//! [007]