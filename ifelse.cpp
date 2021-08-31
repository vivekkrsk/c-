// ifelse.cpp
// demostrate IF...ELSE statement

#include <iostream>
using namespace std;

int main()
{
    int x;

    cout << "Enter a number: ";
    cin >> x;

    if(x>100)
    {
        cout << "The number is greater than hundred\n";
    }

    else
    {
        cout << "The number is less than hundred\n";

    }

    return 0;
}