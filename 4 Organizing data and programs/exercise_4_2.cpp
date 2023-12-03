#include <iostream>
#include <string>
#include <iomanip>
#include <vector>

std::vector<int> sum_of_values(int end_int)
{
  int sum = 0;
  std::vector<int> sum_value_to;

  for (int i = 0; i < end_int; ++i)
  {
    sum += i;
    sum_value_to.push_back(sum);
  }

  return sum_value_to;
}

int main()
{
  int upper_bound = 1000;
  std::vector<int> values_up_to_i = sum_of_values(upper_bound + 1);
  // convert int to a string
  std::string::size_type maxlen = std::to_string(values_up_to_i[upper_bound - 1]).size();

  for (int i = 0; i <= upper_bound; ++i)
  {
    std::string::size_type i_len = std::to_string(values_up_to_i[i]).size();
    std::cout << i << std::setw(maxlen + 1) << values_up_to_i[i] << std::endl;
  }
}