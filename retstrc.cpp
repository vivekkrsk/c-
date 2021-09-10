//retstrc.cpp
// demostrates returning a structure

#include <iostream>
using namespace std;

struct Distance
{
    int feet;
    float inches;
};

Distance addengl(Distance,Distance);
void engldisp(Distance);

int main()
{
   Distance d1, d2, d3;

   cout << "\n Enter feet: ";
   cin >> d1.feet;
   cout << "\n Enter inches: ";
   cin >> d1.inches;

   cout << "\n Enter feet: ";
   cin >> d2.feet;
   cout << "\n Enter inches: ";
   cin >> d2.inches;

   d3 = addengl(d1, d2);
   cout<<endl;
   engldisp(d1);
   cout << " + ";
   engldisp (d2);
   cout << " = ";
   engldisp(d3);
   cout << endl;

    return 0;
}
//engldisp()
// adds two structures of type Distance, return sum
Distance addengl( Distance dd1, Distance dd2)
{
    Distance dd3;

    dd3.inches = dd1.inches + dd2.inches;
    dd3.feet =0;
    if (dd3.inches >= 12.0)
    {
        dd3.inches -=12.0;
        dd3.feet++;
    }

    dd3.feet += dd1.feet + dd2.feet;
    return dd3;
    
}

// engldisp
// display structure of type Distance infeet and inches
void engldisp(Distance dd)
{
    cout << dd.feet << "\'- " << dd.inches << "\"";
}