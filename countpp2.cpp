// countpp2.cpp
// increment counter variable with ++ operator, retur value

#include <iostream>
using namespace std;

class counter
{
private:
    unsigned int count;

public:

counter() : count(0)
{ }
unsigned int getcount()
{ return count;}
counter operator ++ ()
{
    ++count;
    counter temp;
    temp.count = count;
    return temp;
}
    
};


int main()
{
    counter c1, c2;

    cout << "\nc1 = " << c1.getcount();
    cout << "\nc2 = " << c2.getcount();

    ++c1;
    c2 = ++c1;

    cout << "\nc1 = " << c1.getcount();
    cout << "\nc2 = " << c2.getcount() << endl;

    return 0;
}