#pragma once
#ifndef DATE_H
#define DATE_H
#include <iostream>

class Date
{
private:
    int year, month, day;

public:
    void setYear(int y);
    void setMonth(int m);
    void setDay(int d);
    int getYear() const;
    int getMonth() const;
    int getDay() const;
};
#endif