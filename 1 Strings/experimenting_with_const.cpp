#include <iostream>
#include <string>

int main()
{
  const std::string s = "constant string";
  std::cout << s << std::endl;
  const std::string s = "kidding dyanmic";
  std::cout << s;
  return 0;
}