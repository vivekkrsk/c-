// counten2.cpp
// constructor in derived class

#include <iostream>
using namespace std;

class Counter
{
 protected:
  unsigned int count;

public:
Counter(): count(0)
{ }

Counter(int c): count(c)
{ }
unsigned int getcount() const
{ return count; }
Counter operator ++ ()
{ return Counter (++count); } 
   
};

class countDn : public Counter
{
    public:
    countDn(): Counter()
    { }
    countDn(int c): Counter(c)
    { }
    countDn operator -- ()
    { return countDn (-- count);}
};




int main()
{
    countDn c1;
    countDn c2(100);

    cout << "\nc1 = "<< c1.getcount();
    cout << "\nc2 = "<<c2.getcount();

    ++c1; ++c1; ++c1;
    cout << "\nc1 = "<< c1.getcount();

    --c2; --c2;
    cout << "\nc2 = "<< c2.getcount();

    countDn c3 = --c2;
    cout <<"\nc3 = "<< c3.getcount();
    cout << endl;

    return 0;
}