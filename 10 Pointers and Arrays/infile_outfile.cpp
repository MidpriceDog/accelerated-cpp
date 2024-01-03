#include <string>
#include <fstream>

int main()
{
  std::ifstream infile("in");   // Use std::ifstream instead of ifstream
  std::ofstream outfile("out"); // Use std::ofstream instead of ofstream
  std::string my_str;

  while (getline(infile, my_str))
  {
    outfile << my_str << std::endl;
  }
  return 0;
}