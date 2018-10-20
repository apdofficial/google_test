#include <gtest/gtest.h>
#include <iostream>
#include "../Date/Date.h"
#include "../Date/Date.cpp"

TEST(Test,IncrementTest){
    Date date=Date{30,10,2020};
    date.increment_day(4);
    ASSERT_EQ(date.str(),"03-11-2020");
}
