// addifelse.cpp
// demostrate IF...ELSE with adventure program

#include <iostream>
using namespace std;
#include <conio.h>

int main()
{
    char dir = 'a';
    int x = 10, y = 10;

    cout << "Typed Enter to quit\n";
    while (dir != '\r')
    {
        cout << "\nYour location is " << x << ", " << y;
        cout << "\npress direction key (n,s,e,w): ";

        dir = getche();
        if (dir == 'n')
            y--;
        else if( dir=='s' )    
            y++;
        else if( dir=='e' )    
            x++;
        else if( dir=='w' )    
            x--;

    }

    return 0;
}