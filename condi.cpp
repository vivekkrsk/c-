// condi.cpp
// print 'x' every 8 columns
//demostrate conditionl operator

#include <iostream>
using namespace std;

int main()
{
    for( int j=0; j<80; j++)
    {
        char ch = (j%8) ? ' ' : 'x';
        cout << ch;
    }

    return 0;
}