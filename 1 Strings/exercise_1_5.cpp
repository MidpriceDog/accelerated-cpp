#include <iostream>
#include <string>

int main()
{
  /* This program is NOT valid because the variable x has a local scope since it
   * is defined between the curly braces on lines 11 and 14
   */
  {
    std::string s = "a string";
    {
      std::string x = s + ", really";
      std::cout << s << std::endl;
    }
    std::cout << x << std::endl; // error because x is out of scope here
  }
  return 0;
}