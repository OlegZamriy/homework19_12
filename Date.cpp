
#include "Date.h"

Date::Date(int d, int m, int y) : day(d), month(m), year(y) {}

int Date::getDay() const {
    return day;
}

int Date::getMonth() const {
    return month;
}

int Date::getYear() const {
    return year;
}

int Date::operator-(const Date& other) const {
    const int daysInMonth[] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    int days = day - other.day;

    for (int i = other.month; i < month; ++i) {
        days += daysInMonth[i];
    }

    days += (year - other.year) * 365; 

    return days;
}

Date Date::operator+(int days) const {
    Date result = *this;  

    result.day += days;

    while (result.day > 31) {
        result.day -= 31;
        result.month++;

        if (result.month > 12) {
            result.month = 1;
            result.year++;
        }
    }

    return result;
}

