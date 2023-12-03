#include "vector_student.h"
#include <vector>
#include <list>

double hw_average(std::vector<double> hw_grades)
{
  double hw_total = 0;
  int n = hw_grades.size();
  for (int i = 0; i < n; ++i)
  {
    hw_total += hw_grades[i];
  }
  return hw_total / n;
}

double hw_average(std::list<double> &hw_grades)
{
  double hw_total = 0;
  typedef std::list<double>::const_iterator hw_const_iter;
  for (hw_const_iter iter = hw_grades.begin(); iter != hw_grades.end(); ++iter)
  {
    hw_total += (*iter);
  }
  return hw_total / hw_grades.size();
}

double grade(const Student &s)
{
  return 0.2 * s.midterm + 0.5 * s.final + 0.3 * hw_average(s.homework);
}

bool compare(const Student &s1, const Student &s2)
{
  return s1.last_name < s2.last_name;
}

bool fgrade(const Student &s)
{
  return grade(s) < 60;
}

std::list<Student> extract_fails(std::list<Student> &students)
{
  std::list<Student> fails;
  std::list<Student>::iterator iter = students.begin();
  while (iter != students.end())
  {
    if (fgrade(*iter))
    {
      fails.push_back(*iter);
      iter = students.erase(iter);
    }
    else
    {
      ++iter;
    }
  }
  return fails;
}

int main()
{
  // Create two objects each of type Student using a designated initializer
  // Each designator names a direct non-static data member of Student
  Student s1 = {.first_name = "Ian", .last_name = "Paul", .midterm = 90, .final = 100};
  s1.homework.push_back(23);
  Student s2 = {
      .first_name = "Diana", .last_name = "Corzine", .homework = std::vector<double>(5), .midterm = 20, .final = 100};
  // Compare the objects
  std::cout << compare(s2, s1) << std::endl;
  // Add the students to a list
  std::list<Student> students;
  students.push_back(s1);
  students.push_back(s2);
  // Create a list of failed students
  std::list<Student> failed_students = extract_fails(students);
  // Print the first name of each student that failed
  typedef std::list<Student>::const_iterator student_const_iterator;
  for (student_const_iterator iter = failed_students.begin(); iter != failed_students.end(); ++iter)
  {
    std::cout << (*iter).first_name << std::endl;
  }

  return 0;
}