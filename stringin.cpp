// stringin.cpp
// simple string variable

#include <iostream>
using namespace std;

int main()
{
    const int MAX = 80;
    char str[MAX];

    cout << "Enter a string: ";
    cin >> str;

    cout << "You entered: "<< str << endl;

    return 0;
}