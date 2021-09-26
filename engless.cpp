// engless.cpp
// overlosded '<' ooperator to compare two distance

#include <iostream>
using namespace std;

class Distance
{
private:
    int feet;
    float inches;

public:
   Distance() : feet(0) ,  inches(0.0)
   { }
   Distance(int ft, float in) : feet(ft), inches(in)
   {  }
   void getdist()
   {
       cout << "\nEnter feet: ";
       cin >> feet;
       cout << "\nEnter inches: ";
       cin >> inches;
   }

   void showdist() const
   { cout << feet << "\'- " << inches <<"\"" ;}

   bool operator < (Distance) const; 
   
};

bool Distance::operator<(Distance d2) const
{
    float bf1 = feet + inches/12;
    float bf2 = d2.feet + d2.inches/12;
    return (bf1 < bf2) ? true : false;
}

int main()
{
    Distance dist1;
    dist1.getdist();

    Distance dist2(6, 2.5);

    cout << "\ndist1 = ";
    dist1.showdist();
    cout << "\ndist2 = ";
    dist2.showdist();

    if (dist1 < dist2)
    {
        cout << "\ndist1 is less than dist2";
    }
    else
    {
        cout << "\ndist1 is greater than or equal to dist2";
    }

    cout << endl;
    

    return 0;
}