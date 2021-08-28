// adswitch.cpp
// demostrates SWITCH with adventure programe

#include <iostream>
using namespace std;
#include <conio.h>

int main()
{
    char dir='a';
    int x=10, y=10;
     
    while( dir != '\r')
    {
        cout << "\nYour location is "<<x<<", "<<y;
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
        
        case 'e' :
            x++;
            break;
        
        case  'w':
            x--;
            break;
        
        case  '\r':
            cout << "Exiting\n";
            break;
        
        default:
        cout << "Try again\n";
            break;
        }
    }

    return 0;
}