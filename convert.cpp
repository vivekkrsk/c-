// convert.cpp
// demostrates return value and converts pound to kg

#include <iostream>

using namespace std;

float lbstokg(float);

int main()
{
    float lbs, kgs;

    cout << "\nEnter your weight in pound: ";
    cin >> lbs;
    kgs = lbstokg(lbs);
    cout << "Your weight in kilograms is "<< kgs << endl;

    return 0;
}

// lbstokg()
// convert pound to kilograms
float lbstokg(float pounds)
{
    float kilograms = 0.453592 * pounds;
    return kilograms;
}