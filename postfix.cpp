// postfix.cpp
// overload ++ operator in both prefix and postfix

#include <iostream>
using namespace std;

class counter
{
private:
    unsigned int count;
public:
counter() : count(0)
{ }
counter (int c) : count(c)
{ }
unsigned int getcount()const 
{ return count; }

counter operator ++ ()
{
    return counter(++count);
}
counter operator ++ (int)
{
    return counter(count++);
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
    cout << "\nc2 = " << c2.getcount();

    c2 = c1++;

    cout << "\nc1 = " << c1.getcount();
    cout << "\nc2 = " << c2.getcount() << endl;

    return 0;
}