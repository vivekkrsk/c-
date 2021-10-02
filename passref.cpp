// passref.cpp
// argument pass by refrence

#include <iostream>
using namespace std;

int main()
{
    void centimise(double&);

    double var = 10.0;
    cout << "var = "<< var << "inches" << endl;

    centimise(var);
    cout << "var = " << var << "centimeters" << endl;

    return 0;
}

void centimise(double& v)
{
    v *= 2.54;
}