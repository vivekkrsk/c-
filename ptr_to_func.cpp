// Pointer of function

#include <iostream>
using namespace std;

void fun( int a)
{
    cout << "value of a is "<< a << endl;
}

int main()
{
    void (*fun_ptr)(int)=&fun;

    (*fun_ptr)(10);

    void (*fun_ptr2)(int)=fun;

    (*fun_ptr2)(200);

    return 0;
}