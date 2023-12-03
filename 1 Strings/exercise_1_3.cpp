#include <iostream>
#include <string>

int main()
{
  /* This program is valid because although the string s is defined as a const
   * with 2 different values twice, the scope of the variable is limited to the
   * curly braces in which it lives. After each left curly brace, the variable is
   * destroyed and memory is freed.
   */
  {
    const std::string s = "a string";
    std::cout << s << std::endl;
  }
  {
    const std::string s = "another string";
    std::cout << s << std::endl;
  }
  return 0;
}