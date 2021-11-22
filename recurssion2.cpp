#include <iostream>
using namespace std;

int bad(int n)
{
    // incorrect rcursive function
    if (n==0)
    {
        return 0;
    }
    else
    {
        return bad(n/3+1)+n-1;
    }
    
}

int main()
{
    int x;
    cin >> x;
    cout << bad(x);

    return 0;
}