// factor2.cpp
// calculate factorial using recursion

#include <iostream>
using namespace std;

unsigned long factfunc(unsigned long);

int main()
{
    int n;
    unsigned long fact;

    cout << "Enter an integer: ";
    cin >> n;
    fact = factfunc(n);
    
    cout << "Factorial of "<< n << " is "<< fact << endl;

    return 0;
}

unsigned long factfunc(unsigned long n)
{
    if(n > 1)
    {
        return n*factfunc(n-1);
    }

    else 
    {
        return 1;
    }
}