#include <iostream>
#include <ctime>
#include <string>

class Die
{
private:
    int faceValue;
    const int SIDES = 6;

public:
    void roll();
    int getFaceValue() const;
    std::string printDie() const;
};

int main()
{
    srand(time(0));
    Die dice;
    int sum = 0;
    for (int i = 0; i < 3; i++)
    {
        dice.roll();
        sum += dice.getFaceValue();
        std::cout << dice.printDie() << std::endl;
    }
    std::cout << "The sum is: " << sum;
    return 0;
}

// changes the value of the die to a random number between 1 and the number of the sides.  (rand() % SIDES + 1)
void Die::roll()
{
    faceValue = rand() % SIDES + 1;
}

// returns the current face value.
int Die::getFaceValue() const
{
    return faceValue;
}

// returns a string description of the Die, for example, "A 6-sided Die showing a 4"
std::string Die::printDie() const
{
    std::string mssg = "A " + std::to_string(SIDES) + "-sided Die showeing a " + std::to_string(getFaceValue());
    return mssg;
}