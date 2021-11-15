// F.cpp
// F shaped pattern

#include <iostream>
using namespace std;

int main()
{
    for(int i=0; i<8; i++)
    {
        cout <<" *";
        if(i==0|| i==3)
        {
           for(int j=0; j<(7-i); j++)
           {
               cout <<" *";
           }
        }
        cout << endl;
    }

    return 0;
}