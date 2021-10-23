// xdist.cpp
// exception with distance class

#include <iostream>
using namespace std;

class Distance
{
private:
    int feet;
    float inches;

public:
    class InchesEX
    {
    };

    Distance()
    {
        feet = 0;
        inches = 0.0;
    }
    Distance(int ft, float in)
    {
        if (in >= 12.0)
        {
            throw InchesEX();
        }
        feet = ft;
        inches = in;
    }
    void getdist()
    {
        cout << "\nEnter feet: ";
        cin >> feet;
        cout << "\nEnter inches: ";
        cin >> inches;
         if (inches >= 12.0)
        {
            throw InchesEX();
        }
    }
    void showdist()
    {
        cout << feet << "\'-" << inches << '\"';
    }
};

int main()
{
    try
    {
        Distance dist1(17, 3.5);
        Distance dist2;
        dist2.getdist();

        cout << "\ndist1 = ";
        dist1.showdist();
        cout << "\ndist2 = ";
        dist2.showdist();
    }
    catch (Distance::InchesEX)
    {
        cout << "\nInitilization error: "
                " inches value is too large";
    }

    cout << endl;

    return 0;
}