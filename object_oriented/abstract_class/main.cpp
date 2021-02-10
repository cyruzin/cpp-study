#include <iostream>

#include "rectangle.cpp"
#include "triangle.cpp"

int main()
{
  Rectangle *rec = new Rectangle(5, 5);
  std::cout << "Rectangle area: " << rec->getArea() << std::endl;

  Triangle *tri = new Triangle(5, 7);
  std::cout << "Triangle area: " << tri->getArea() << std::endl;
}