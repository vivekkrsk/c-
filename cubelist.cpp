// cubelist.cpp
// lists cubes from 1 to 100

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int numb;

    for (numb = 1; numb <= 100; numb++)
    {
        cout << setw(4) << numb;
        int cube= numb*numb*numb;
        cout << setw(10) << cube << endl;
    }
    return 0;
}