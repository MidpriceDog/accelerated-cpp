#include <iterator>
#include <vector>
#include <iostream>

/*
 * template function that copies elements starting at begin and ending at end
 * into dest as it goes
 * In is any Input Iterator
 * Out is any Output Iteerator
 */
template <class Out, class In>
Out custom_copy(In begin, In end, Out dest)
{
  while (begin != end)
  {
    (*dest++) = (*begin++);
  }
  return dest;
}

int main()
{
  std::vector<int> v = {24, 3, 32, 3};
  // write the elements of v each separated from the other by a space
  custom_copy(v.begin(), v.end(), std::ostream_iterator<int>(std::cout, " "));
  // write endline to the output stream;
  std::cout << std::endl;
  return 0;
}