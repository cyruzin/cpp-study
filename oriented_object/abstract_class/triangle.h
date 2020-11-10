#include "shape.h"

class Triangle : public Shape
{
public:
  Triangle();
  Triangle(int width, int height);
  int getArea(); // override from shape class
};