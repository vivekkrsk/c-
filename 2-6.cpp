// ex 2-6

#include <iostream>
using namespace std;

int main()
{
    float dollar, pound, franc, yen, dem;

    cout << "Enter the amount in dollar: ";
    cin >> dollar;

    pound = dollar * 1.487F;
    franc = dollar * 0.172F;
    yen = dollar * 0.00955F;
    dem = dollar * 0.584F;

    cout << "Value in pound : " << pound << endl;
    cout << "Value in franc : " << franc << endl;
    cout << "Value in German deutschemak : " << dem << endl;
    cout << "Value in yen : " << yen << endl;
    return 0;
}