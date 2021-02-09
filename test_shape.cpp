#include"shape.h"
#include"polygon.h"
#include"circle.h"
#include"rectangle.h"
#include"triangle.h"
#include<gtest/gtest.h>
namespace
{
TEST(Rectangle,Area)
{
    Rectangle R1(8,5);
    EXPECT_EQ(40,R1.area());
    EXPECT_EQ(26,R1.circumference());
}
TEST(Triangle,Area)
{
    Triangle T1(5,4,7);
    EXPECT_EQ(8,T1.area());
    EXPECT_EQ(16,T1.circumference());
}
TEST(Circle,Area)
{
    Circle C1(5);
    EXPECT_EQ(78.5,C1.area());
    EXPECT_EQ(31.4,C1.circumference());
}
}