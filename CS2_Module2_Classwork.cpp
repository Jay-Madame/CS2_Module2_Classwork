#include <iostream>
#include <vector>

void produceCrayons();
int draw(std::string color, int amtLeft, int amtToDraw);

class Rectangle
{
private:
    double width, length;

public:
    void setWidth(double w);
    void setLength(double l);

    double getWidth() const;
    double getLength() const;
    double getArea() const;
};

class Crayon
{
private:
    std::string color;
    int length;

public:
    void draw(int lineLength);
    Crayon blend(Crayon otherCrayon);
    void setColor(std::string c);
    void setLength(int l);
    std::string getColor() const;
    int getLength() const;
};

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
    int pointsPossible, pointsEarned, dueYear, dueMonth, dueDay;

public:
    void setName(std::string n);
    void setPointsPossible(int p);
    void setPointsEarned(int e);
    void setDueYear(int y);
    void setDueMonth(int m);
    void setDueDay(int d);
    std::string getName() const;
    int getPointsPossible() const;
    int getPointsEarned() const;
    int getDueYear() const;
    int getDueMonth() const;
    int getDueDay() const;
};

class Student
{
    Assignment assignments;
private:
    std::string firstName, emailAddress, address;
    int idNumber, phoneNumber;
    std::vector<Assignment> Assignments;

    public:
    void setFirstName(std::string f);
    void setLastName(std::string l);
    void setEmailAddress(std::string email);
    void setAddress(std::string address);
    void setIDNumber(int id);
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

void produceCrayons()
{
    std::string crayon1 = "red";
    std::string crayon2 = "orange";
    std::string crayon3 = "yellow";
    std::string crayon4 = "green";
    std::string crayon5 = "blue";
    std::string crayon6 = "indigo";
    std::string crayon7 = "purple";
    std::string crayon8 = "black";

    int crayon1Length = 100;
    int crayon2Length = 100;
    int crayon3Length = 100;
    int crayon4Length = 100;
    int crayon5Length = 100;
    int crayon6Length = 100;
    int crayon7Length = 100;
    int crayon8Length = 100;
}

int draw(std::string color, int amtLeft, int amtToDraw)
{
    // blah blah blah

    return amtToDraw;
}

void Rectangle::setWidth(double w)
{
    width = w;
}
void Rectangle::setLength(double l)
{
    length = l;
}

double Rectangle::getWidth() const
{
    return width;
}
double Rectangle::getLength() const
{
    return length;
}
double Rectangle::getArea() const
{
    return (getWidth() * getLength());
}
void Crayon::draw(int lineLength)
{
    std::cout << "A line of " << color << " extending " << lineLength << " feet on the wall" << std::endl;
    length = length - lineLength;
}
Crayon Crayon::blend(Crayon otherCrayon)
{
    Crayon c;
    c.setColor(color + otherCrayon.getColor());
    c.setLength(length + otherCrayon.getLength());
    return c;
}
void Crayon::setColor(std::string c)
{
    color = c;
}
void Crayon::setLength(int l)
{
    length = l;
}
std::string Crayon::getColor() const
{
}
int Crayon::getLength() const
{
}