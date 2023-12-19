
#ifndef DATE_H
#define DATE_H

class Date {
private:
    int day;
    int month;
    int year;

public:
    Date(int d, int m, int y);

    int getDay() const;
    int getMonth() const;
    int getYear() const;

    int operator-(const Date& other) const;  
    Date operator+(int days) const;          
};

#endif  // DATE_H
