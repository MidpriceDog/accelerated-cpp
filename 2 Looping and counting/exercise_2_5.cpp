#include <iostream>

int triangle()
{
  const int size = 10;
  const std::string star = "*";
  std::cout << "*" << std::endl;
  for (int j = 0; j < size; ++j)
  {
    std::cout << star;
    for (int i = 0; i < j; ++i)
    {
      std::cout << " ";
    }
    std::cout << star << std::endl;
  }
  for (int k = 0; k < size + 2; ++k)
  {
    std::cout << star;
  }
  std::cout << std::endl;
  return 0;
}

int rectangle(int length, int width)
{
  const std::string star = "*";
  // Create the top of the rectangle
  for (int i = 0; i < length; ++i)
  {
    std::cout << star;
  }
  std::cout << std::endl;
  // Loop over width-2 rows writing a star in the first and last position
  for (int j = 0; j < width - 2; ++j)
  {
    std::cout << star;
    for (int i = 0; i < length - 2; ++i)
    {
      std::cout << " ";
    }
    std::cout << star;
    std::cout << std::endl;
  }
  // Create the bottom of the rectangle
  for (int i = 0; i < length; ++i)
  {
    std::cout << star;
  }
  std::cout << std::endl;
  return 0;
}

int main()
{
  rectangle(40, 9);
}
