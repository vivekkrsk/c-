// ex2-2

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    long fj = 135, fk = 7290, fl = 11300, fd = 16200;

    cout << setw(4) << "1990" << setw(9) << fj << endl
         << setw(4) << "1991" << setw(9) << fk << endl
         << setw(4) << "1992" << setw(9) << fl << endl
         << setw(4) << "1993" << setw(9) << fd << endl;
    return 0;
}