// ex2-9

#include <iostream>
using namespace std;

int main()
{
    int a, b, c, d;
    char dummychar;
    cout << " Enter first fraction: ";
    cin >> a >> dummychar >>b;
    cout << "Enter second fraction: ";
    cin >> c>> dummychar >> d;

    cout << "sum = " << (a*d)+(b*c) << "/" << b*d << endl;
    return 0;
}