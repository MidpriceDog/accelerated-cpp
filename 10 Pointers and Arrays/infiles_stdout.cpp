#include <fstream>
#include <iostream>
#include <string>

int main(int argc, char **argv)
{
  int num_fail = 0;
  for (int i = 1; i < argc; ++i)
  {
    // read file in given in the arguments
    std::fstream infile(argv[i]);
    // if it exists, write to it
    if (infile)
    {
      std::string s;
      while (getline(infile, s))
      {
        std::cout << s << std::endl;
      }
    }
    else
    {
      std::cerr << "File " << argv[i] << " cannot be opened" << std::endl;
      num_fail += 1;
    }
  }
  return num_fail;
}