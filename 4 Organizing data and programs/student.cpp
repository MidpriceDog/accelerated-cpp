#include "student.h"

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

double course_grade(const Student &s)
{
  return 0.2 * s.midterm + 0.5 * s.final + 0.3 * hw_average(s.homework);
}

bool compare(const Student &s1, const Student &s2)
{
  return &s1.last_name < &s2.last_name;
}
