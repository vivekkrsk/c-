// days.cpp
// shows days from start of year to date specified

#include <iostream>
using namespace std;

int main()
{
    int month, day, totaldays;
    int dayspermonth[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    cout << "\nEnter month (1 to 12): ";
    cin >> month;
    cout << "Enter date ( 1 to 31): ";
    cin >> day;

    totaldays =day;
    for (int i = 0; i < month-1; i++)
    {
        totaldays += dayspermonth[i];
    }

    cout << "Total days from start of year is: "<< totaldays << endl;
    

    return 0;
}