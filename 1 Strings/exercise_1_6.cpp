#include <string>
#include <iostream>

int main()
{
  std::cout << "Hello what is your name? ";
  std::string name;
  std::cin >> name;
  std::cout << "Hello " << name << std::endl;
  std::cout << "And yours? ";
  std::cin >> name;
  std::cout << "Nice to meet you too " << name << std::endl;
  return 0;
}