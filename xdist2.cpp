// exdist2.cp
// exceptions with argument

#include <iostream>
#include <string>
using namespace std;

class Distance
{
private:
    int feet;
    float inches;

public:
    class InchesEX
    {
        public :
        string origin;
        float ivalue;

        InchesEX(string or, float in)
        {
            origin = or;
            ivalue = in;
        }
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
            throw InchesEX("2-arg constructor", in);
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
            throw InchesEX("getdist() function", inches);
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
    catch (Distance::InchesEX ix)
    {
        cout << "\nInitilization error: " << ix.origin
            <<  " inches value "; << ix.ivalue
            << "is too large";
    }

    cout << endl;

    return 0;
}