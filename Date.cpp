#include "Date.h"

void Date::setYear(int y)
{
    year = y;
}
void Date::setMonth(int m)
{
    month = m;
}
void Date::setDay(int d)
{
    day = d;
}
int Date::getYear() const
{
    return year;
}
int Date::getMonth() const
{
    return month;
}
int Date::getDay() const
{
    return day;
}