// friend.cpp
// friend functions

#include <iostream>
using namespace std;

class Beta;

class alpha
{
private:
    int data;
public:
alpha(): data(3) { }
friend int frifunc(alpha, Beta);
   
};
class Beta
{
private:
    int data ;
public:
Beta() : data(7) { }
friend int frifunc(alpha, Beta);
    
};

int frifunc( alpha a, Beta b)
{
    return(a.data + b.data );
}



int main()
{
    alpha aa;
    Beta bb;

    cout << frifunc(aa, bb)<<endl;

    return 0;
}