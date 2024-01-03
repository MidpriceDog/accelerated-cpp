#include <map>
#include <vector>
#include <iostream>

std::map<std::string, int> word_frequency(std::vector<std::string> words)
{
  std::map<std::string, int> word_freq;
  typedef std::vector<std::string>::const_iterator iter;
  for (iter i = words.begin(); i != words.end(); ++i)
  {
    word_freq[(*i)] += 1;
  }
  return word_freq;
}

void read_and_write_freq()
{
  std::map<std::string, int> count;
  std::string s;
  while (std::cin >> s)
  {
    ++count[s];
  }
  std::cout << "\n";
  for (auto i = count.begin(); i != count.end(); ++i)
  {
    std::cout << i->first << " " << i->second << std::endl;
  }
}

int main()
{
  std::vector<std::string> v = {"the", "dog", "went", "to", "the", "fence"};
  std::map<std::string, int> x = word_frequency(v);
  for (std::map<std::string, int>::const_iterator iter = x.begin(); iter != x.end(); ++iter)
  {
    std::cout << iter->first << " " << iter->second << std::endl;
  }
  read_and_write_freq();

  // Test initializer syntax
  std::map<std::string, int> m = {
      {"a", 3},
      {"b", 4},
      {"c", 2}};

  return 0;
}