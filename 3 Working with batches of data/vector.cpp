#include <iostream>
#include <vector>

std::vector<double> test_push_back(std::vector<double> v, double t)
{
  v.push_back(t);
  return v;
}

int main()
{
  std::vector<double> arr;
  arr = test_push_back(arr, 3.4);
  typedef std::vector<double>::size_type vector_size;
  vector_size size = arr.size();
  std::cout << size;
  return size;
}