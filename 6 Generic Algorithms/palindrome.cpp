
#include <vector>
#include <string>
#include <iostream>
#include <cctype>
#include <algorithm>

/**
 * Check if the string is a palindrome using indicies.
 *
 * @param s string to check
 * @return true if the string is a palindrome, false otherwise.
 */
bool palindrome(std::string &s)
{
  int n = s.size();
  for (int i = 0; i < n; ++i)
  {
    if (s[i] != s[n - i - 1])
    {
      return false;
    }
  }
  return true;
}

/**
 * Check if the string is a palindrome using iterators.
 *
 * @param s string to check
 * @return true if the string is a palindrome, false otherwise.
 */

bool iter_palindrome(std::string &s)
{
  // The equal function takes in 3 arugments.
  // An iterator denoting the start of the first sequence
  // An iterator denoting the end of the first sequence
  // An iterator denoting the start of the second sequence to compare for equality with the first sequence
  // It is assumed by the equal function that the first and second sequence are of equal size
  return std::equal(s.begin(), s.end(), s.rbegin());
}

int main()
{
  std::string s = "madam";
  std::cout << palindrome(s) << std::endl;
  std::cout << iter_palindrome(s) << std::endl;
  return 0;
}