// engconst.cpp
// const member function and const argument to member function

#include <iostream>
using namespace std;

class Distance
{
private:
    int feet ;
    float inches;
public:
Distance(): feet(0), inches(0.0)
{}

Distance(int ft, float in) : feet(ft), inches(in)
{}

void getdist()
{
    cout << "\nEnter feet: ";
    cin >> feet;
    cout << "\nEnter inches: ";
    cin >> inches;
}

void showdist() const
{ cout << feet << "\'-" << inches << "\""; }

Distance adddist( const Distance&) const;
    
};

Distance Distance::adddist( const Distance& d2) const
{
    Distance temp;
    //feet =0
    // d2.feet=0   error: can't modify

    temp.inches = inches + d2.inches;

    if (temp.inches >= 12.0)
    {
        temp.inches -=12.0;
        temp.feet =1;
    }
    temp.feet += feet + d2.feet;
    return temp;
    
}


int main()
{
    Distance dist1, dist3;
    Distance dist2(11, 6.25);

    dist1.getdist();
    dist3 = dist1.adddist(dist2);

    cout << "\ndist1 = "; dist1.showdist();
    cout << "\ndist2 = "; dist2.showdist();
    cout << "\ndist3 = "; dist3.showdist();
    cout << endl;

    return 0;
}