#ifndef __RECTANGLE_H
#define __RECTANGLE_H

#include "polygon.h"

class Rectangle : public Polygon {
  int  len;
  int  brth;

public:
  Rectangle(int ,int );
  double area();
  double circumference();
};

#endif
