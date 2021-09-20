// arrover3.cpp
// creates safe array (index values are checked before access)
// uses overloaded [] operator for both put and get

#include <iostream>
#include <process.h>
using namespace std;

const int LIMIT= 100;

class safearay
{
private:
    int arr[LIMIT];
public:
int& operator [](int n)
{
    if (n< 0 || n>=LIMIT)
    {
        cout << "\nIndex out of bound";
        exit(1);
    }
    return arr[n];
    
}
   
};


int main()
{
    safearay sa1;

    for (int i = 0; i < LIMIT; i++)
    {
        sa1[i] = i*10;
    }

    for (int i = 0; i < LIMIT; i++)
    {
        int temp = sa1[i];
        cout << "Element " << i << " is "<< temp << endl;
    }
    
    return 0;
}