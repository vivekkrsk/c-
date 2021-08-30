// if2.cpp
// demostrates IF with multiline body

#include <iostream>
using namespace std;

int main()
{
    int x;

    cout << "Enter the number: ";
    cin >>x;

    if(x > 100 )
    {
        cout << "The number "<< x;
        cout << " is greater than 100\n";
    }

    return 0;
}