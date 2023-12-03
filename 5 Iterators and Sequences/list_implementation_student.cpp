#include "list_student.h"

int main()
{
  Student s3 = {
      .first_name = "Tommy", .last_name = "Kubrick", .homework = std::list<double>(5), .midterm = 20, .final = 100};
  return 0;
}