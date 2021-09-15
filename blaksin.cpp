// blacksin.cpp
// reads string with embedded blanks

#include <iostream>
using namespace std;

int main()
{
    const int MAX = 80;
    char str[MAX];

    cin.get(str, MAX);
    cout << "You entered: " << str << endl;
    

    return 0;
}