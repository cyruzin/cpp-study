#pragma once

class Shape
{
public:
  virtual int getArea() = 0;

  void setWidth(int width)
  {
    m_width = width;
  }

  void setHeight(int height)
  {
    m_height = height;
  }

protected:
  int m_width, m_height;
};