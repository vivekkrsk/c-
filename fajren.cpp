//fahren.cpp
//demostrates cin,newline

#include <iostream>
using namespace std;

int main()
{
    int ftemp; //for temprature in fahrenheit

    cout << "Enter temprature infahrenheit: ";
    cin >> ftemp;
    int ctemp = (ftemp - 32) * 5 / 9;
    cout << "Equivalent in Celsius is: " << ctemp << '\n';
    return 0;
}