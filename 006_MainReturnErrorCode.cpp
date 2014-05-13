#include <iostream>

//! [006]

int main()
{
  // Returns an error code to the system
  // $ echo %ERRORLEVEL% (Win) or $ echo $? (Unix) will print 1
  return 1;

  // Everything is ok
  // $ echo %ERRORLEVEL% (Win) or $ echo $? (Unix) will print 0
  return 0;
}
//! [006]