// ptrvoid2.cpp
// pointerr to type void

#include <iostream>
using namespace std;

int main()
{
    int intvar;
    float flovar;

    int *ptrint;
    float *ptrflo;
    void *ptrvoid1;
    void *ptrvoid2;

    ptrint = &intvar;
   // ptrint = reinterpret_cast<int*>(flovar);
    ptrflo =  reinterpret_cast<float*>(intvar);
    ptrflo = &flovar;
    ptrvoid1 = &intvar;
    ptrvoid2 = &flovar;

    cout << ptrint << endl
         << ptrflo << endl
         << ptrvoid1 << endl
         << ptrvoid2 << endl;

    return 0;
}