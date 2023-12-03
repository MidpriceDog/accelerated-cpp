
#ifndef GUARD_LIST_STUDENT

#define GUARD_LIST_STUDENT

#include <list>
#include <iostream>
#include <string>

struct Student
{
  std::string first_name, last_name;
  double midterm;
  double final;
  std::list<double> homework;
};

double grade(const Student &); // course grade calculator function
double hw_average(std::list<double>);
bool compare(const Student &, const Student &); // compare function

#endif
