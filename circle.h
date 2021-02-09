#ifndef __CIRCLE_H
#define __CIRCLE_H

#include "shape.h"

class Circle : public IShape {
  double rad;

public:
  const static double PI = 3.14;
  Circle(double);
  double area();
  double circumference();
};

#endif
