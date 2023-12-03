#include <iostream>
#include <string>

int main()
{

  // Ask for name input
  std::cout << "Please enter your name: "; // no std::endl so input will be on same line
  std::string name;                        // define name
  std::cin >> name;                        // read into
  // Greet the person
  std::cout << "Hello, " << name << "." << std::endl;
  return 0;
}
