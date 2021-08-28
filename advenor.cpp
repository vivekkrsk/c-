// advenor.cpp
// demostrate OR logical operator

#include <iostream>
using namespace std;
#include <conio.h>

int main()
{
    char dir = 'a';

    int x = 10, y = 10;

    while (dir != '\r')
    {
        cout << "\nYour location is " << x << ", " << y;

        if (x < 5 || x > 15)
            cout << "\nBeware: dragon lurk here";
        
        cout << "\nEnter direction (n, s, e, w): ";
        dir = getche();
        switch (dir)
        {
        case 'n':
            y--;
            break;

        case 's':
            y++;
            break;

        case 'e':
            x++;
            break;

        case 'w':
            x--;
            break;
        }
        return 0;
    }
}