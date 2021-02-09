#include <iostream>
#include<cmath>
#include"shape.h"
#include"polygon.h"
#include"circle.h"
#include"rectangle.h"
#include"triangle.h"
using namespace std;
Polygon::Polygon(int n):side{n}
{
    /**
     * @brief Polygon class
     * 
     */
}
Rectangle::Rectangle(int l,int b):Polygon(4),len{l},brth{b}
{
    /**
     * @brief rectangle class
     * 
     */
}
double Rectangle::area()
{
    cout<<"Area="<<len*brth<<endl;
    return len*brth;
}
double Rectangle::circumference()
{
    cout<<"Circumference="<<2*(len+brth)<<endl;
    return 2*(len+brth);
}
Triangle::Triangle(int x,int y,int z):Polygon(3),a{x},b{y},c{z}
{
        /**
         * @brief triangle class
         * 
         */
}
double Triangle::area()
{
    int r=(a+b+c)/2;
    cout<<"Area="<<sqrt(r*(r-a)*(r-b)*(r-c))<<endl;
    return sqrt(r*(r-a)*(r-b)*(r-c));
}
double Triangle::circumference()
{
    cout<<"Circumference="<<a+b+c<<endl;
    return a+b+c;
}
Circle::Circle(double r):rad{r}
{
    /**
     * @brief circle class
     * 
     */
}
double Circle::area()
{

    cout<<"Area="<<PI*rad*rad<<endl;
    return PI*rad*rad;
}
double Circle::circumference()
{
    cout<<"Circumference="<<2*PI*rad<<endl;
    return 2*PI*rad;
}