// while4.cpp
// prints number raised to fourth power

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int pow=1;
    int numb=1;

    while (pow<10000 )
    {
        cout << setw(2) << numb;
        cout << setw(5) << pow << endl;
        ++numb;
        pow = numb*numb*numb*numb;
    }
       cout << endl;    

    return 0;
}