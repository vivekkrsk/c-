// overengl.cpp
// demostrates overloaded function

#include <iostream>
using namespace std;

struct Distance
{
    int feet;
    float inches;
};

void engldisp(Distance);
void engldisp(float);

int main()
{
    Distance d1;
    float d2;

    cout << "Enter feet: ";
    cin >> d1.feet;
    cout << "\nEnter inches: ";
    cin >> d1.inches;

    cout << "\nEnter entire distance in inches: ";
    cin >> d2;

    cout << "\nd1 = ";
    engldisp(d1);
    cout << "\nd2 = ";
    engldisp(d2);
    cout << endl;

    return 0;
}

void engldisp(Distance dd)
{
    cout << dd.feet << "\' - " << dd.inches << "\"";
}

void engldisp(float dd)
{
    int feet = static_cast<int>(dd / 12);
    float inches = dd - feet * 12;
    cout << feet << "\' - " << inches << "\"";
}