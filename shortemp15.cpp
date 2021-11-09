// sortemp.cpp
// sorts array of doubles in backward direction

#include <iostream>
#include <algorithm>
#include <functional>
using namespace std;

double fdata[]= { 19.2, 87.4, 33.6, 55.0, 11.5, 42.2 };

int main()
{
    sort( fdata, fdata+6, greater<double>());

    for (int i = 0; i < 6; i++)
    {
        cout  << fdata[i] << ' ';
    }
    cout  << endl;
    

    return 0;
}