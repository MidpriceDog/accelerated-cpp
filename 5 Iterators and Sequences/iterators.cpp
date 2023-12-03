#include <vector>
#include <string>
#include <iostream>

struct Student_info
{
  std::string name;
};

int main()
{
  std::vector<Student_info> students;
  // Create a Student_info struct
  Student_info s;
  s.name = "John";
  // Add the Student_info struct to the vector
  students.push_back(s);

  // for loop WITHOUT iterator
  for (std::vector<Student_info>::size_type i = 0; i != students.size(); ++i)
  {
    std::cout << students[i].name << std::endl;
  }
  // for loop WITH iterator
  for (std::vector<Student_info>::const_iterator iter = students.begin(); iter != students.end(); ++iter)
  {
    std::cout << (*iter).name << std::endl;
    // equivalently, we can write
    std::cout << iter->name << std::endl;
  }
  return 0;
}