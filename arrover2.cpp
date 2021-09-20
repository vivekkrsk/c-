// arrover2.cpp
// create safe array ( index valves are checked before access )
// uses one access() function for both get annd put

#include <iostream>
#include <process.h>
using namespace std;

const int LIMIT =100;

class safearay
{
private:
    int arr[LIMIT];
public:
int& access(int n)
{
    if ( n<0 || n>= LIMIT )
    {
        cout << "\nIndex out of bounds";
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
        sa1.access(i) = i*10;
    }

    for (int i = 0; i < LIMIT; i++)
    {
        int temp = sa1.access(i);
        cout <<"Elenment " << i << " is "<< temp << endl;
    }
    
    

    return 0;
}