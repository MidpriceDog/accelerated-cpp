#ifndef GUARD_Student
#define GUARD_Student

#include <iostream>
#include <string>
#include <vector>

struct Student
{
  const std::string first_name, last_name;
  double midterm;
  double final;
  std::vector<double> homework;
};

double grade(const Student &); // course grade calculator function
double hw_average(std::vector<double>);
bool compare(const Student &, const Student &); // compare function

#endif
