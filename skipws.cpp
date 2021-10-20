// skipws.cpp

#include <iostream>
using namespace std;

int main()
{
    int i;
    cout <<"\nEnterr an integer: ";
    cin.unsetf(ios::skipws);
    cin >> i;
    if (cin.good())
    {
        // no error
    }
    

    return 0;
}