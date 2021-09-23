// sstrcom.cpp
// comparing string object

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string aName = "George";
    string userName;

    cout << "Enter your first name: ";
    cin >> userName;
    if (userName == aName)
    {
        cout << "Greetings, George\n";
    }

    else if (userName < aName)
    {
        cout << "You come before George\n";
    }

    else
    {
        cout << "You come after George\n";
    }

    int n = userName.compare(0, 2, aName, 0, 2);
    cout << "First two letter of your name ";

    if (n == 0)
    {
        cout << "Match";
    }
    else if (userName < aName)
    {
        cout << "come before ";
    }
    else
    {
        cout << "come after ";
    }

    cout << aName.substr(0, 2) << endl;

    return 0;
}