// friclass.cpp
// friend class

#include <iostream>
using namespace std;

class alpha
{
private:
    int data1;
public:
alpha(): data1(99) { }
friend class Beta;
   
};
class Beta
{

public:
void func1(alpha a) {cout << "\ndata1 = " << a.data1;}
void func2(alpha a) {cout << "\ndata2 = " << a.data1;}

    
};



int main()
{
    alpha aa;
    Beta bb;

   bb.func1(aa);
   bb.func2(aa);

   cout << endl;


    return 0;
}