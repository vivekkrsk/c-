// ex2-7

#include <iostream>
using namespace std;

int main()
{
    int ctemp;
    cout << "Enter temp in celsius: ";
    cin >> ctemp;
    cout << "Temp in fahernheit is: " << (ctemp * 9) / 5 + 32 << endl;
    return 0;
}