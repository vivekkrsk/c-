// ex2-1

#include <iostream>
using namespace std;

int main()
{
    float gallon, cubic;

    cout << "Enter the number of gallon: ";
    cin >> gallon;
    cubic = gallon/7.481;
    cout << "the equivalent in cubic feet is: " << cubic << endl;
    return 0;
}