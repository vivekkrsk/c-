// chcount.cpp
// counts character and word typed in

#include <iostream>
using namespace std;
#include <conio.h>

int main()
{
    int chcount = 0;
    int wdcount = 1;
    char ch = 'a';

    cout << "Enter a phrase: ";
    while (ch != '\r')
    {
        ch = getche();
        if (ch == ' ')
            wdcount++;
        else
            chcount++;
    }

    cout << "\nword = " << wdcount << endl
         << "Letter =" << (chcount - 1) << endl;

    return 0;
}