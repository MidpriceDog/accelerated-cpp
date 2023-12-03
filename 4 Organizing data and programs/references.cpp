#include <iostream>
#include <vector>
using std::vector;

double set_first_element_to_zero(vector<double> &ref)
{
  ref[0] = 0;
  return ref[0];
}

int main()
{

  const vector<double> v;
  const vector<double> &my_ref = v;

  vector<double> mutable_v;
  vector<double> &mutable_ref = mutable_v;
  mutable_ref.push_back(3.4);
  std::cout << set_first_element_to_zero(mutable_ref) << "\n";
  std::cout << mutable_ref[0] << "\n";
  std::cout << mutable_v[0] << "\n";

  return 0;
}