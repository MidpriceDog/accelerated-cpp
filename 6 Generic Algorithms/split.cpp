#include <cctype>
#include <vector>
#include <string>
#include <algorithm>
#include <iostream>

bool is_space(char c)
{
  return isspace(c);
}

bool not_is_space(char c)
{
  return !isspace(c);
}

std::vector<std::string> split(const std::string &str)
{
  std::vector<std::string> result;
  typedef std::string::const_iterator iter;
  iter i = str.begin();
  while (i != str.end())
  {
    // ignore leading blanks
    i = std::find_if(i, str.end(), not_is_space);
    // find end of the word after i
    iter j = std::find_if(i, str.end(), is_space);
    // copy characters in [i,j)
    if (i != str.end())
    {
      result.push_back(std::string(i, j));
    }
    i = j;
  }
  return result;
}

int main()
{
  std::string x = "The quick brown fox jumped over the lazy dog.";
  typedef std::vector<std::string>::const_iterator iter;

  std::vector<std::string> v = split(x);
  for (iter i = v.begin(); i != v.end(); ++i)
  {
    std::cout << (*i) << "\n";
  }
  return 0;
}