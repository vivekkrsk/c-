// sqrt.cpp
// demonstrates sqrt() library function

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double number, answer;

    cout << "Enter the number: ";
    cin >> number;
    answer = sqrt(number);
    cout << "Square root is " << answer << endl;
    return 0;
}