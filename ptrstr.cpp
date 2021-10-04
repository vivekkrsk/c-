// ptrstr.cpp
// display a string with pointerr notation

#include <iostream>
using namespace std;

int main()
{
    void dispstr(char*);
    char str[] = "Idle people have the least leisure.";

    dispstr(str);

    return 0;
}

void dispstr(char* ps)
{
    while (*ps)
    {
        cout << *ps++;
    }
    cout << endl;
    
}