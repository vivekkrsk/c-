// cast.cpp
// test signed and unsigned integers

#include <iostream>
using namespace std;

int main()
{
    int intvar= 15000000000;
    intvar = (intvar *10)/10;
    cout <<"intvar = " << intvar << endl;

    intvar= 15000000000;
    intvar = (static_cast<double>(intvar)*10)/10;
     cout <<"intVar = " << intvar << endl;
     return 0;
}