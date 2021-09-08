// convert.cpp
// demostrates return values, convert pound to kg

#include <iostream>
using namespace std;

float lbstokg(float);

int main()
{
    float lbs, kgs;
    cout<< "Enter the in pound: ";
    cin >> lbs;

    
    cout << "Weight in kg is: "<<lbstokg(lbs) << endl;

    return 0;
}
// lbstokgs()
// convert pound to kilograms
float lbstokg(float pounds)
{ 
    return 0.453592*pounds;
}