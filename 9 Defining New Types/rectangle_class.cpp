#include <iostream>
#include <vector>

class Rectangle
{
public:
  Rectangle(){};
  Rectangle(double l, double w) { this->l = l, this->w = w; };
  double area() const
  {
    return l * w;
  }
  double perimeter() const
  {
    return 2.0 * l + 2.0 * w;
  }
  void set_length(double new_l)
  {
    l = new_l;
  }
  void set_width(double new_w)
  {
    w = new_w;
  }

private:
  double l;
  double w;
};

int main()
{
  Rectangle r = Rectangle();
  r.set_length(3.5);
  r.set_width(2.0);
  std::cout << r.area() << " ";

  Rectangle b = Rectangle(2.0, 4.0);
  std::cout << b.perimeter();
}