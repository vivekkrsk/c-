// passarr.cpp
// array passed by pointer

#include <iostream>
using namespace std;
const int Max =5;

int main()
{
    void centimize(double*);

    double varray[Max]= { 10.0, 43.1, 95.9, 59.7, 87.3  };

    centimize(varray);

    for (int j=0; j<Max; j++)
    {
     cout << "varray["<<j<<"] = "<<varray[j]<<" centimeters"<<endl;
    }

    return 0;
}
void centimize(double* ptrd)
{
    *ptrd++ +=2.54;
}