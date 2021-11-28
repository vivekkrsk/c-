// wild pointer

#include <iostream>
using namespace std;

int main()
{
    int *ptr;// ptr is wild pointer here 

    cout << "ptr "<<ptr<<" this is a garbage address";

    int x=10;
    ptr=&x;// Now ptr is not wild pointer
    cout << "\nptr "<<ptr;


    return 0;
}