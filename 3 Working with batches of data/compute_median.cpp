#include <iostream>
#include <vector>
#include <algorithm>
int main()
{
  std::vector<double> grades;
  double x;
  while (std::cin >> x)
  {
    grades.push_back(x);
  }
  typedef std::vector<double>::size_type v_size;
  v_size size = grades.size();
  v_size middle = size / 2;
  double median;
  sort(grades.begin(), grades.end());
  median = (size % 2) == 0 ? (grades[middle - 1] + grades[middle]) / 2 : grades[middle];
  std::cout << std::endl
            << median << std::endl;
  return median;
}