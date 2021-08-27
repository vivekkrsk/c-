//width1.cpp
//demonstrates need of setw operator

#include <iostream>
using namespace std;

int main()
{
    long pop1 = 2425785, pop2 = 47, pop3 = 9761;

    cout << "location " << "POP." << endl
         << "Portcity "  << pop1 << endl
         << "Hightown " << pop2 << endl
         << "Lowville "<< pop3 << endl;
    return 0;
}