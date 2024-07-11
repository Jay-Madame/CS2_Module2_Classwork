#include <iostream>
#include <vector>

void produceCrayons();
int draw(std::string color, int amtLeft, int amtToDraw);

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

class Assignment
{
    Date dueDate;

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

class Student
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

int main()
{
    Rectangle box;
    box.setWidth(4);
    box.setLength(5);
    std::cout << box.getArea();

    Crayon boxOfCrayons[8];
    boxOfCrayons;
}

// Date
void Date::setYear(int y)
{
}
void Date::setMonth(int m)
{
}
void Date::setDay(int d)
{
}
int Date::getYear() const
{
}
int Date::getMonth() const
{
}
int Date::getDay() const
{
}

// Assignment
void Assignment::setName(std::string n)
{
}
void Assignment::setPointsPossible(int p)
{
}
void Assignment::setPointsEarned(int e)
{
}
void Assignment::setDueDate(Date dd)
{
}
std::string Assignment::getName() const
{
}
int Assignment::getPointsPossible() const
{
}
int Assignment::getPointsEarned() const
{
}
Date Assignment::getDueDate() const
{
}

// Student
void Student::setFirstName(Assignment fn)
{
}
void Student::setLastName(Assignment ln)
{
}
void Student::setEmailAddress(std::string email)
{
}
void Student::setAddress(std::string address)
{
}
void Student::setIDNumber(std::string id)
{
}
void Student::setPhoneNumber(int pnum)
{
}
void Student::setAssignments(Assignment)
{
}