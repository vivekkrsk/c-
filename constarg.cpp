// constarg.cpp
// demostrates constant function arguments

#include <iostream>
using namespace std;

void aFunc(int &a, const int &b);

int main()
{
    int alfa = 7;
    int beta = 11;
    aFunc(alfa, beta);

    return 0;
}

void aFunc(int &a, const int &b)
{
    a = 107;
    // b=111  show error : can't modify constant argument
    cout << a << endl
         << b;
}