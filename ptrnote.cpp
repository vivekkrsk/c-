// ptrnote.cpp
// array accessed with array notation

#include <iostream>
using namespace std;

int main()
{
    int intarray[5] = {31, 54, 77, 52, 93};

    for (int j = 0; j < 5; j++)
    {
        cout << *(intarray + j) << endl;
    }

    cout << endl;

    for (int j = 0; j < 5; j++)
    {
        cout << (intarray + j) << endl;
    }

    cout << endl;
    
    cout << *(intarray + 0) << endl;
    cout << *(intarray + 1) << endl;
    cout << *(intarray + 2) << endl;
    cout << *(intarray + 3) << endl;
    cout << *(intarray + 4) << endl;

    return 0;
}