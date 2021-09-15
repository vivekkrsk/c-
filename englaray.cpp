// englaray.cpp
// objects using English mesasurments

#include <iostream>
using namespace std;

class Distance
{
private:
    int feet;
    float inches;

public:
    void getdist()
    {
        cout << "\nEnter feet: ";
        cin >> feet;
        cout << "\nEnter inches: ";
        cin >> inches;
    }
    void showdist() const
    {
        cout << feet << "\'-" << inches << "\'";
    }
};

int main()
{
    Distance dist[100];
    int n = 0;
    char ans;

    cout << endl;

    do
    {
        cout << "Enter distance number " << n + 1;
        dist[n++].getdist();
        cout << "Enter another (y/n)?: ";
        cin >> ans;
    } while (ans != 'n');

    for (int i = 0; i < n; i++)
    {
        cout << "\nDistance number " << i + 1 << " is ";
        dist[i].showdist();
    }
    cout << endl;

    return 0;
}