// listout.cpp
// iterator and loop for output

#include <list>
#include <algorithm>
#include <iostream>
using namespace std;

int main()
{
    int arr[] = {2, 4, 6, 8};
    list<int> thelist;

    for (int k = 0; k < 4; k++)
        thelist.push_back(arr[k]);

    list<int>::iterator iter;

    for (iter = thelist.begin(); iter != thelist.end(); iter++)
        cout << *iter << ' ';

    cout << endl;

    return 0;
}