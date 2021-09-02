// showprime.cpp
// display prime number distributation

#include <iostream>
using namespace std;
#include <conio.h>

int main()
{
    const unsigned char White = 219;
    const unsigned char Gray = 176;
    unsigned char ch;

    for(int count=0; count<80*25-1; count++)
    {
        ch = White;

        for ( int j=2; j<count; j++)
           if (count%j == 0)
           {
               
               ch = Gray;
               break;
           }
      cout << ch;
    }
getch();
    return 0;
}