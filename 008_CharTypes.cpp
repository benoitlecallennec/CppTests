#include <iostream>

//! [008]
int main()
{
  signed char sc = 255; // UB: signed overflow
  unsigned char uc = 255; 

  // is equivalent to signed char or unsigned char. It is compiler dependent
  char c = 255; // Signed or unsigned?

  // Just print to see whether char is signed or unsigned.
  // Use int to see something.

  // Default MSVC2013 compiler behavior:
  // Prints -1 255 -1 => so char is signed char
  // Adding /J flag force unsigned char by default for char:
  // Prints -1 255 255 => so now char is indeed unsigned char
  std::cout << int(sc) << " " << int(uc) << " " << int(c) << std::endl;

  std::cout << '\7' << std::endl;

  return 0;
}
//! [008]