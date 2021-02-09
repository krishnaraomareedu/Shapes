#ifndef __TRIANGLE_H
#define __TRIANGLE_H

#include "polygon.h"

class Triangle : public Polygon {
  int  a;
  int  b;
  int  c;

public:
  Triangle(int x,int y,int z);
  double area() ;
  double circumference();
};

#endif
