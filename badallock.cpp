// badallock.cpp
// demostrates bad alloc exception

#include <iostream>
using namespace std;

int main()
{
    const unsigned long SIZE  = 10000;

    char* ptr;

    try
    {
        ptr = new char[SIZE];

    }

    catch(bad_alloc)
    {
        cout << "\nbad_alloc exception: can't allocate memory.\n";
        return(1);
    }
    delete[] ptr;
    cout << "\nMemory use is successful.\n";

    return 0;
}