// salefunc.cpp
// passes array as an arguments

#include <iostream>
#include <iomanip>
using namespace std;

const int DISTRICTS =4;
const int MONTHS=3;

void display(double [DISTRICTS][MONTHS]);

int main()
{
    double sales[DISTRICTS][MONTHS]= {{1432.07, 234.50, 654.01},
                                       {322.00, 13838.32, 17589.88},
                                       {9328.34, 934.00, 4492.30},
                                       {12838.29, 2332.63, 32.93}};
    
    display(sales);
    cout << endl;
    
    return 0;
}

void display( double funsales[DISTRICTS][MONTHS])
{
       cout << "\n\n";
    cout << "                        Month\n";
    cout << "                1         2        3";
    for (int d = 0; d < DISTRICTS; d++)
    {
        cout << "\nDistrict " << d + 1;
        for (int m = 0; m < MONTHS; m++)
        {
            cout << setiosflags(ios::fixed)
                 << setiosflags(ios::showpoint)
                 << setprecision(2)
                 << setw(10)
                 << funsales[d][m];
        }
    }
}