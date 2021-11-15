// E.cpp
// e shape pattern

#include <iostream>
using namespace std;

int main()
{
    for(int i=0; i<7; i++)
    {
        cout << '*';
        if(i==0 || i==3 || i == 6)
        {
            for(int j=0; j<6; j++)
            {
                cout <<'*';
            }
        }
        cout <<'\n';
    }

    return 0;
}