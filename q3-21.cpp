// q3-21.cpp

#include <iostream>
using namespace std;

int main()
{
    char ch;
    cout <<"Enter y to print yes and n to print no: ";
    cin >> ch;

    switch(ch)
    {
        case 'y': cout << "Yes";
        break;
        case 'n': cout << "No";
        break;
    }

    return 0;
}