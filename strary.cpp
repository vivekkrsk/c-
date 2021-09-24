// straray.cpp
// array of strings

#include <iostream>
using namespace std;

int main()
{
    const int DAYS = 7;
    const int MAX = 10;

    char star[DAYS][MAX] = {"Sunday",
                            "Monday",
                            "Tuesday",
                            "Wensday",
                            "Thrusday",
                            "Friday",
                            "Saturday"};

    for (int i = 0; i < DAYS; i++)
    {
        cout << star[i] << endl;
    }

    return 0;
}