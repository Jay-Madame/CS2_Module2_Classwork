#pragma once
#ifndef ASSIGNMENT_H
#define ASSIGNMENT_H
#include <iostream>
#include "Date2.h"

class Assignment
{
private:
    std::string name;
    int pointsPossible, pointsEarned, dueDate;

public:
    void setName(std::string n);
    void setPointsPossible(int p);
    void setPointsEarned(int e);
    void setDueDate(Date dd);
    std::string getName() const;
    int getPointsPossible() const;
    int getPointsEarned() const;
    Date getDueDate() const;
};

#endif