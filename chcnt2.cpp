// chcnt2.cpp
// count character and word typed in

#include <iostream>
using namespace std;
#include <conio.h>

int main()
{
    int chcount=0;
    int wdcount=1;
    char ch;

    while ((ch=getche()) != '\r')
    {
        if( ch == ' ')
        wdcount++;
        else
        chcount++;
    }

    cout << "\nWord=" << wdcount << endl
         << "Letter=" << chcount << endl;

    return 0;
}