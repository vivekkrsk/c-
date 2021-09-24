// strpart.cpp
// string used in widget part object

#include <iostream>
#include <cstring>
using namespace std;

class part
{
private:
    char partname[30];
    int partnumber;
    double cost;

public:
     void setpart( char pname[], int pn, double c)
     {
         strcpy(partname, pname);
         partnumber = pn;
         cost = c;
     }

     void showpart()
     {
         cout << "\nName = " << partname;
         cout << ", number = " << partnumber;
         cout << ", cost = $" << cost;
     }
};

int main()
{
    part part1,part2;

    part1.setpart("Handel bolt", 4473, 217.55);   
    part2.setpart("Start lever", 6433, 550.45); 

    cout << "\nFirst part: ";
    part1.showpart();
    cout << "\nSecond part: ";
    part2.showpart();  

    return 0;
}