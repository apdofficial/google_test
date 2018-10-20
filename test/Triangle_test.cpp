#include<gtest/gtest.h>
#include "../Triangle/Triangle.h"
#include "../Triangle/Triangle.cpp"

TEST(Test, Triangle_test){
    Triangle triangle;
    ASSERT_EQ(triangle.triangle_type(3.1, 4.1, 1.0),"not a triangle");
    ASSERT_EQ(triangle.triangle_type(7.0, 0.1, 7.0),"isosceles triangle");
    ASSERT_EQ(triangle.triangle_type(99.9, 99.9, 99.9),"equilateral triangle");
    ASSERT_EQ(triangle.triangle_type(6.2, 4.0, 6.7),"scalene triangle");
}

