// arrayover1.cpp
// create safe array ( index valves are checked before access)
// use seprate put and get fnction

#include <iostream>
#include <process.h>
using namespace std;

const int LIMIT = 100;

class safearay
{
private:
    int arr[LIMIT];

public:
    void putel(int n, int elvalue)
    {
        if (n < 0 || n >= LIMIT)
        {
            cout << "\nIndex is out of bound";
            exit(1);
        }
        arr[n] = elvalue;
    }
    int getel(int n) const
    {
        if (n < 0 || n >= LIMIT)
        {
            cout << "\nIndex is out of bound";
            exit(1);
        }
        return arr[n];
    }
};

int main()
{
    safearay sa1;

    for (int i = 0; i < LIMIT; i++)
    {
        sa1.putel(i, i * 10);
    }

    for (int i = 0; i < LIMIT; i++)
    {
        int temp = sa1.getel(i);
        cout << "Element " << i << " is " << temp << endl;
    }

    return 0;
}