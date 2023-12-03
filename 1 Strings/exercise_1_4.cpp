#include <iostream>
#include <string>

int main()
{
  /* This program is valid because both of the definitions of const std::string s
   * in two different scopes. The const std::string s = "another string" exists
   * only within the most nested pair of curly braces, so the definition of
   * const std::string s =  "a string" is valid and does not conflict with it.
   */
  {
    const std::string s = "a string";
    std::cout << s << std::endl;
    {
      const std::string s = "another string";
      std::cout << s << std::endl;
    }
  }
  return 0;
}