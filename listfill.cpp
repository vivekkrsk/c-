// listfill.cpp
// uses iterator to fill list with data

#include <list>
#include <iostream>
using namespace std;

int main()
{
    list<int> ilist(5);
    list<int>::iterator it;
    int data = 0;

    for (it = ilist.begin(); it != ilist.end(); it++)
        *it = data += 2;

    for (it = ilist.begin(); it != ilist.end(); it++)
        cout << *it << ' ';
    
    cout << endl;
    return 0;
}