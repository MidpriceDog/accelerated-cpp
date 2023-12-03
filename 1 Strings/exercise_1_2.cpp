#include <iostream>
#include <string>

int main()
{
  const std::string exclaim = "!";                          // Valid definition
  const std::string message = "Hello" + " world" + exclaim; // Invalid since we can not add s + t, where s and t are both string literals
  return 0;
}