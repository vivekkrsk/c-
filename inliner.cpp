// inliner.cpp
// demostrate inline function

#include <iostream>
using namespace std;

inline float lbstokg(float pound)
{
    return 0.453592* pound;
}

int main()
{
    float lbs;

    cout << "\n Enter your weight in pounds: ";
    cin >> lbs;

    cout << "Your weight in kg is: "<<lbstokg(lbs) << endl;

    return 0;
}