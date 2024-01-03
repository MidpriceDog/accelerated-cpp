#include <vector>
#include <iostream>

// template function for the max of two variables of two different types
template <class A, class B>
B max_b(const A &a, const B &b)
{
  return a > b ? a : b;
}
// template function for the max of two variables of the same type T
template <class T>
T max_t(const T &a, const T &b)
{
  return a > b ? a : b;
}

/*
 * template function for replacing elements of type X in a sequence with another
 * with other elements of type X. Does not return anything.
 */
template <class For, class X>
void replace(For begin, For end, const X &a, const X &b)
{
  while (begin != end)
  {
    if (*begin == a)
    {
      *begin = b;
    }
    ++begin;
  }
}

/* template function for an implementation of the binary search algorithm
 * operating on a sorted vector which requires an iterator supporting random access
 */
template <class Ran, class X>
bool my_binary_search(Ran begin, Ran end, const X &x)
{
  while (begin < end)
  {
    Ran mid = (begin) + (end - begin) / 2;
    if (x < *mid)
    {
      end = mid;
    }
    else if (x > *mid)
    {
      begin = mid + 1;
    }
    else
    {
      return true;
    }
  }
  return false;
}

/* template function to reverse an iterator in place. uses helper function swap
 */
template <class For>
void reverse(For begin, For end)
{
  while (begin != end)
  {
    end--;
    swap(*begin++, *end);
  }
}

template <class X>
void swap(X &a, X &b)
{
  auto temp = a;
  a = b;
  b = temp;
}

int main()
{
  std::cout << max_b(7.3, 4) << std::endl;
  std::cout << max_t(7.3, 4.0) << std::endl;
  std::vector<double> sorted_vector = {0, 2.3, 4.5, 5.4, 6.6, 6.61, 7.9, 7.99, 9.0};
  std::cout << my_binary_search(sorted_vector.begin(), sorted_vector.end(), 51.4) << std::endl;
  return 0;
}