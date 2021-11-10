// outiter.cpp
// demostrate ostream_iterator

#include <algorithm>
#include <list>
#include <iostream>
#include <iterator>
using namespace std;

int main()
{
    int arr[] = {10, 20,30, 40,50};
    list<int> thelist;

    for(int j=0; j<5; j++)
    {
        thelist.push_back(arr[j]);
    }

    ostream_iterator<int> ositer(cout, ",");

    cout << "\n content of list: ";
    copy(thelist.begin(), thelist.end(), ositer);
    cout << endl;

    return 0;
}