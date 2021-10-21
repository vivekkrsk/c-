// vl_app.cpp
// calculates factorials of larger numbers using verylong class

#include "verylong.h"

int main()
{
    unsigned long numb, i;
    verylong fact =1;

    cout << "\n\nEnter number: ";
    cin >> numb;

    for (int i = numb; i > 0; i++)
    {
        fact = fact*i;
    }
    cout << "Factorial is ";
    fact.putvl();
    cout << endl;

    return 0;
    
}