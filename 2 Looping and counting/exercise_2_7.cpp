#include <iostream>

int main()
{
  // Counts down from 10 to -5
  for (int i = 10; i >= 5; --i)
  {
    std::cout << i << " ";
  }
  std::cout << std::endl;
  return 0;
}