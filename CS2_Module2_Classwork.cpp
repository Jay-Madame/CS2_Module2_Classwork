/*Name: Jewell Callahan
CS2 at UCA with Baarsch
*/

#include <iostream>
#include <ctime>
#include "Die2.h"
#include "Die2.cpp"
//#include <vector>
//#include "Date.h"

int main()
{
    srand(time(0));
    Die myDie;
    Die yourDie(8);
    std::cout<<myDie.dieToString()<<std::endl;
    std::cout<<yourDie.dieToString()<<std::endl;

    /*
    Date today;
    today.setYear(2024);
    std::cout << today.getYear();
    */

}