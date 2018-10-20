#include<gtest/gtest.h>
#include "../Triangle/Triangle.h"
#include "../Triangle/Triangle.cpp"

TEST(Test, Triangle_test){
    Triangle triangle;
    ASSERT_EQ(triangle.triangleShape(3.1,4.1,1.0),"not a triangle");
    ASSERT_EQ(triangle.triangleShape(7.0,0.1,7.0),"isosceles triangle");
    ASSERT_EQ(triangle.triangleShape(99.9,99.9,99.9),"equilateral triangle");
    ASSERT_EQ(triangle.triangleShape(6.2,4.0,6.7),"scalene triangle");
}

