// badelse.cpp
// demostrateif with worng else

#include <iostream>
using namespace std;

int main()
{
    // int a, b, c;
    // cout << "Enter three number, a, b, and c: \n";
    // cin >> a >> b >> c;

    // if (a == b)
    //     if (b == c)
    //         cout << "a, b, and c are the same\n";
    //     else
    //         cout << "a and b are different\n";

    // this programe print nothing because it is example of worng if matched with else

    // correct program
    int a, b, c;
    cout << "Enter three number, a, b, and c: \n";
    cin >> a >> b >> c;

    if (a == b)
    {
        if (b == c)
        cout << "a, b, and c are the same\n";
    }
        else cout << "a and b are different\n";
    return 0;
}