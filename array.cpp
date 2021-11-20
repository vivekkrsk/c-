// array.cpp

#include <iostream>
using namespace std;

int main()
{
    int marks[4] = {75, 45, 66, 95};

    cout << marks[0] << endl;
    cout << marks[1] << endl;
    cout << marks[2] << endl;
    cout << marks[3] << endl;
    cout << endl
         << endl;

    cout << marks << endl;

    cout << endl
         << endl;

    for (int i = 0; i < 4; i++)
    {
        cout << "The marks of " << i << "is " << marks[i] << endl;
    }
    cout << endl
         << endl;

    int i = 0;
    while (i < 4)
    {
        cout << "The marks of " << i << "is " << marks[i] << endl;
        i++;
    }
    cout << endl
         << endl;

    int j = 0;
    do
    {
        cout << "The marks of " << j << " is " << marks[j] << endl;
        j++;

    } while (j < 4);
    cout << endl
         << endl;

    int *c = &marks[0];
    int *d = &marks[1];
    int *e = &marks[2];
    int *f = &marks[3];

    cout << c << endl;
    cout << d << endl;
    cout << e << endl;
    cout << f << endl;
    cout << endl
         << endl;

    cout << *c << endl;
    cout << *d << endl;
    cout << *e << endl;
    cout << *f << endl;
    cout << endl
         << endl;

    cout << &marks[0] << endl;
    cout << &marks[1] << endl;
    cout << &marks[2] << endl;
    cout << &marks[3] << endl;

    return 0;
}