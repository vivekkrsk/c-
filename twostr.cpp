// twostr.cpp
// string defined using array and pointer notation

#include <iostream>
using namespace std;

int main()
{
    char str1[] = "Defined as an array";
    char* str2 = "Defined as a pointer";

    cout << str1 << endl;
    cout << str2 << endl;

    // str++;     can't do this; str1 is constant
    str2++;       // this is ok , str2 is pointer

    cout << str2 << endl;

    return 0;
}