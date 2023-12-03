#include <iostream>
#include <vector>
#include <algorithm>

void print_quartiles(std::vector<int> vec)
{
  typedef std::vector<int>::iterator iter;
  iter start = vec.begin();
  iter end = vec.end();
  sort(start, end);
  typedef std::vector<int>::size_type size_t;
  size_t size = vec.size();
  size_t mid = size / 2;
  size_t first_q_index = size / 4;

  size_t third_q_index = 3 * size / 4;

  size_t second_quartile = (size % 2 == 0) ? (vec[mid] + vec[mid - 1]) / 2 : vec[mid];
  size_t first_quartile = (size % 4 == 0) ? (vec[first_q_index] + vec[first_q_index - 1]) / 2 : vec[first_q_index];
  size_t third_quartile = (3 * size % 4 == 0) ? (vec[third_q_index] + vec[third_q_index - 1]) / 2 : vec[third_q_index];
  std::cout << first_quartile << " " << second_quartile << " " << third_quartile << "\n";
}

int main()
{
  std::vector<int> my_vector;
  for (int i = 0; i < 9; ++i)
  {
    my_vector.push_back(i);
  }
  print_quartiles(my_vector);
  return 0;
}