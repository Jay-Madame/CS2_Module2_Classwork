#pragma once
#ifndef STUDENT2_H
#define STUDENT2_H
#include <iostream>
#include <vector>
#include "Date2.h"
#include "Assignment.h"

class Student2
{
    Assignment assignments;

private:
    std::string firstName, emailAddress, address, idNumber;
    int phoneNumber;
    std::vector<Assignment> Assignments;

public:
    void setFirstName(Assignment fn);
    void setLastName(Assignment ln);
    void setEmailAddress(std::string email);
    void setAddress(std::string address);
    void setIDNumber(std::string id);
    void setPhoneNumber(int pnum);
    void setAssignments(Assignment);
};

#endif