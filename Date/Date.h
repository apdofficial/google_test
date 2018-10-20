#ifndef ASSIGNMNET_3_DATE_TIME_H
#define ASSIGNMNET_3_DATE_TIME_H

#include <ctime>
#include "iostream"

class Date {
private:
    time_t m_date;
public:
    Date();
    Date(int day, int month, int year);
    std::string str()const;
    void increment_day(const int &increment);
};


#endif //ASSIGNMNET_3_DATE_TIME_H
