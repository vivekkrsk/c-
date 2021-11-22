#include <iostream>
using namespace std;

void printout(int n)
{
    if (n >= 10)
    {
       printout(n/10);
    }
    
    cout  << n%10 << endl;
    
}

int main()
{
    int x;
    cin >> x;
     printout(x);
    

    return 0;
}