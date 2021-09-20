// counterpp1.cpp
// increment counter variable with ++ operator

#include <iostream>
using namespace std;

class Counter
{
private:
    unsigned int count;
public:
  Counter() : count(0)
  { }
  unsigned int getcount()
  { return count; }
   void operator ++()
   {
       ++count;
   } 
};


int main()
{
    Counter c1, c2;

    cout << "\nc1 = " << c1.getcount();
    cout << "\nc2 = " << c2.getcount();

    ++c1;
    ++c2;
    ++c2;

    cout << "\nc1 = " << c1.getcount();
    cout << "\nc2 = " << c2.getcount()<< endl;
    

    return 0;
}