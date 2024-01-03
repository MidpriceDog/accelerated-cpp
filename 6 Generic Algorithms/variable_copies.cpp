#include <iostream>

int main()
{

  int y = 10;
  // Create a pointer to the address of the variable y
  int *ptr = &y;
  // the value of ptr is the memory address of the variable y
  std::cout << "1. " << ptr << std::endl;
  // lets change the value of y
  y = y - 2;
  // the value of the address will remain unchanged even though the value of y is now different
  std::cout << "2. " << ptr << std::endl;
  ptr++;
  // ptr now points to the memory address incremented by ++ operator
  std::cout << "3. " << ptr << std::endl;
  // address of y is still unchanged
  std::cout << "4. " << &y << std::endl;
  // Create a reference to the variable y
  int &ref_ptr = y;
  // As usual, changing the reference will change the value of the variable the reference references, which is y in this case
  ref_ptr += 4;
  // Therefore, y will change
  std::cout << "5. " << y;
}