// signtest.cpp
// tests signed and unsigned integers

#include <iostream>
using namespace std;

int main()
{
    int signedVar = 1500000000;
    unsigned int unsignVar = 1500000000;

    signedVar = (signedVar *2) /3;
    unsignVar = (unsignVar *2) /3;

    cout << "signedVar = "<< signedVar <<endl ;  //worng
    cout << "unsignVar = "<< unsignVar <<endl ;  //correct
    return 0;
}