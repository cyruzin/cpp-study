#include "shape.h"

class Rectangle : public Shape
{
public:
   Rectangle();
   Rectangle(int width, int height);
   int getArea(); // override from shape class
};