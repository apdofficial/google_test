#include "Triangle.h"

Triangle::Triangle() = default;

std::string Triangle::triangleShape(double s_1, double s_2, double s_3) {
    if ( (s_3 >= (s_1 + s_2)) || (s_2 >= (s_1 + s_3)) || (s_1 >= (s_2 + s_3)) ) {
        return "not a triangle";
    }
    else if ((s_1 == s_2) && (s_2 == s_3)) {
        return "equilateral triangle";
    }
    else if (
            ((s_1 == s_2) && (s_1 != s_3)) ||
            ((s_2 == s_3) && (s_2 != s_1) )||
            ((s_1 == s_3) && (s_1 != s_2) )) {
        return "isosceles triangle";
    }
    else {
        return "scalene triangle";
    }
}
