#include "read.h"

using std::string;
using std::vector;

vector<string> read()
{
  vector<string> words;
  string word;
  while (std::cin >> word)
  {
    words.push_back(word);
  }
  return words;
}

int count_words(std::vector<std::string> v)
{
  return v.size();
}

int count_occurrences(std::vector<std::string> v)
{
  // Create a parallel array holding the number of occurences of v[i] at index i
  std::vector<std::string> occurences_v;
  for (int i = 0; i < v.size(); ++i)
  {
    occurences_v.push_back(0);
  }
}
