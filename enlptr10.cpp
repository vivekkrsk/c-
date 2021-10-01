// englptr.cpp
// accessing member function by pointer

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
    cout << "\nEnter feet: "; cin >> feet;
    cout << "\nEnter inches: "; cin >> inches;
}

void showdist()
{
    cout << feet <<"\'-" << inches << '\"';
}
  
};


int main()
{
    Distance dist;
    dist.getdist();
    dist.showdist();

    Distance* distptr;
    distptr = new Distance;
    distptr->getdist();
    distptr-> showdist();

    cout <<endl;

    return 0;
}