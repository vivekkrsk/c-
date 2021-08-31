// platters.cpp
// demostrate switch statement

#include <iostream>
using namespace std;

int main()
{
    int speed;

    cout << "\nEnter 33, 45, 78: ";
    cin >> speed;
    switch (speed)
    {
    case 33:
        cout << "LP album\n";
        break;

    case 45:
        cout << "Single selection\n";
        break;

    case 78:
        cout << "Obsolate formate\n";
        break;
    }

    return 0;
}