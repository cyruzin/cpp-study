#include "triangle.h"

Triangle::Triangle(int width, int heigth)
{
  m_width = width;
  m_height = heigth;  
}

int Triangle::getArea()
{
  return (m_width * m_height) / 2;
}