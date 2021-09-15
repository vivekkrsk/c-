// linesin.cpp
// reads multiple lines, terminates on '$' character

#include <iostream>
using namespace std;

const int MAX = 2000;
char str[MAX];

int main()
{
    cout << "\nEnter a string:\n";
    cin.get(str, MAX, '$');
    cout << "You entered:\n"<<str << endl;

    return 0;
}