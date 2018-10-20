#include <chrono>
#include <sstream>
#include <iomanip>
#include <ctime>
#include "Date.h"

Date::Date() {
    std::chrono::system_clock::to_time_t(std::chrono::system_clock::now());
};

Date::Date(int day, int month, int year) {
    std::tm local{0, 0, 0,day, month-1, year-1900};
    local.tm_isdst = -1;
    this->m_date = std::mktime(&local);
}

void Date::increment_day(const int &increment){
    auto local{*localtime(&m_date)};
    local.tm_mday += increment;
    m_date = std::mktime(&local);
}

std::string Date::str()const {
    std::ostringstream os;
    auto loc_date = *std::localtime(&m_date);
    os << std::put_time( &loc_date,"%d-%m-%Y");
    return os.str();
}

