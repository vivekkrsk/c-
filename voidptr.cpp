// Void pointer

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x=4;
    float y=5.5;

    void *ptr;
    ptr=&x;

    cout << "Integer variable is = "<<*((int*)ptr);

    ptr=&y;
    cout << "\nFloat variable is = "<<*((float*)ptr);

    return 0;
}