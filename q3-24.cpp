// q3-24.cpp

#include <iostream>
using namespace std;

int main()
{
    int speed, limit;
    cout<< "Enter speed and limit: ";
    cin >> limit;
    cin >> speed;

    if(limit == 55 && speed > 55)
    cout << "true";
    else
    cout << "false";

    return 0;
}