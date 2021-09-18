//salemon.cpp
//display sale chart using 2-d array

#include <iostream>
#include <iomanip>
using namespace std;

const int DISTRICTS = 4;
const int MONTHS = 3;

int main()
{
    int d, m;
    double sales[DISTRICTS][MONTHS];

    cout << endl;
    for (int i = 0; i < DISTRICTS; i++)
    {
        for (m = 0; m < MONTHS; m++)
        {
            cout << "Enter sales for district " << i + 1;
            cout << ", month " << m + 1 << ": ";
            cin >> sales[i][m];
        }
    }

    cout << "\n\n";
    cout << "                        Month\n";
    cout << "                1         2        3";
    for (d = 0; d < DISTRICTS; d++)
    {
        cout << "\nDistrict " << d + 1;
        for (m = 0; m < MONTHS; m++)
        {
            cout << setiosflags(ios::fixed)
                 << setiosflags(ios::showpoint)
                 << setprecision(2)
                 << setw(10)
                 << sales[d][m];
        }
    }
    cout << endl;

    return 0;
}