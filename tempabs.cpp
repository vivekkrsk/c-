// tempabs.cpp
// template used for absolute value function

#include <iostream>
using namespace std;

template <class T>
T abs(T n)
{
    return (n < 0) ? -n : n;
}

int main()
{
    int int1 = 5;
    int int2 = -6;
    long lon1 = 700000L;
    long lon2 = -800000L;
    double dub1 = 9.95;
    double dub2 = -10.15;

    cout << "\nabs("<< int1 <<")= "<< abs(int1);
    cout << "\nabs("<< int2 <<")= "<< abs(int2);
    cout << "\nabs("<< lon1 <<")= "<< abs(lon1);
    cout << "\nabs("<< lon2 <<")= "<< abs(lon2);
    cout << "\nabs("<< dub1 <<")= "<< abs(dub1);
    cout << "\nabs("<< dub2 <<")= "<< abs(dub2);

    cout << endl;

    return 0;
}