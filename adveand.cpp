// adveand.cpp
// demostrate AND logica; operator

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
        if (x == 7 && y == 11)
        {
            cout << "\nYou found the treasure!\n";
            exit(0);
        }
    }

    return 0;
}