
#include "Date.h"
#include <iostream>

int main() {
    Date date1(1, 1, 2022);
    Date date2(1, 1, 2023);

    int daysDifference = date2 - date1;
    std::cout << "Days between dates: " << daysDifference << " days" << std::endl;

    int daysToAdd = 30;
    Date newDate = date1 + daysToAdd;
    std::cout << "Date after adding " << daysToAdd << " days: " << newDate.getDay() << "/" << newDate.getMonth() << "/" << newDate.getYear() << std::endl;

    return 0;
}
