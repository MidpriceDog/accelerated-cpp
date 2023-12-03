#include <string>
#include <iostream>
int main()
{
  const std::string hello = "Hello";                   // This definition is valid
  const std::string message = hello + ", world" + "!"; // This definition is valid because hello is a const
  // Print the message
  std::cout << message << std::endl;
  return 0;
}