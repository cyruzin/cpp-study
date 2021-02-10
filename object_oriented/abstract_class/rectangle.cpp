#include "rectangle.h"

Rectangle::Rectangle(int width, int height)
{
  m_width = width;
  m_height = height;
}

int Rectangle::getArea()
{
  return (m_width * m_height);
}