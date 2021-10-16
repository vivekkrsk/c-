// ostrstr.cpp
// write formatted data into memory

#include <strstream>
#include <iostream>
#include <iomanip>
using namespace std;
const int SIZE = 80;

int main()
{
    char ch = 'x';
    int j = 77;

    double d = 67890.12345;
    char str1[] = "kafka";
    char str2[] = "Freud";

    char membuff[SIZE];
    ostrstream omem(membuff, SIZE);

    omem << "ch=" << ch << endl
         << "j=" << j << endl
         << setiosflags(ios::fixed)
         << setprecision(2)
         << "d=" << d << endl
         << "str1=" << str1 << endl
         << "str2=" << str2 << endl
         << ends;

    cout << membuff;

    return 0;
}