// iterfind.cpp
// find() return a list iterator
#include <algorithm>
#include <list>
#include <iostream>
using namespace std;

int main()
{
    list<int> thelist(5);
    list<int>::iterator iter;
    int data = 0;

    for (iter = thelist.begin(); iter != thelist.end(); iter++)
    {
        *iter = data += 2;
    }

    iter = find(thelist.begin(), thelist.end(), 8);

    if (iter != thelist.end())
    {
        cout << "\nFound 8.\n";
    }
    else
        cout << "\nDid not find 8.\n";

    return 0;
}