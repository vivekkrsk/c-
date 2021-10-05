// varaddr.cpp
// address of variable

#include <iostream>
using namespace std;

int main()
{
    int var1 = 11;
    int var2 = 22;
    int var3 = 33;

    cout << &var1 << endl
         << &var2 << endl
         << &var3 << endl;
    cout << "Value of variable: "<< var1 << endl
         << "Value of variable: "<< var2 << endl
         << "Value of variable: "<< var3 << endl;

    return 0;
}