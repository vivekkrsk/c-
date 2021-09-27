// explicit.cpp

#include <iostream>
using namespace std;

class Distance
{
private:
    const float MFT;
    int feet;
    float inches;

public:

Distance(): feet(0), inches(0.0),MFT(3.280833F)
{ }
explicit Distance(float meters) : MFT(3.280833F)
{
    float fltfeet = MFT * meters;
    feet = int(fltfeet);
    inches = 12*(fltfeet-feet);
}

void showdist()
{ cout << feet << "\'-"<< inches << '\"'; }
   
};

int main()
{
  void fancydist(Distance);
  Distance dist1(2.35F);

  //Distance dist1 = 2.35F;    Error if ctor is explict  
cout << "\ndist1 = ";
dist1.showdist();

float mtrs = 3.0F;
cout <<"\ndist1 ";
// fancydist(mtrs);            Error if ctor is explict 


    return 0;
}

void fancydist(Distance d)
{
    cout << "( in ffet and inches) = ";
    d.showdist();
    cout << endl;
}