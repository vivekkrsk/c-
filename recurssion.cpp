#include <iostream>
using namespace std;

int f(int x)
{
    if (x==0)
    {
        return 0;
    }
    else
    {
        return 2*f(x-1) + x*x;
    }
    
}

int main()
{
    int n;
    cin >> n;
    cout << f(n);

    return 0;
}