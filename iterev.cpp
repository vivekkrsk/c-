// itrev.cpp
// demostrate reverse iterator

#include <list>
#include <iostream>
using namespace std;

int main()
{
    int arr[] = {2, 4, 6, 8, 10};
    list<int> thelist;

    for (int j = 0; j < 5; j++)
    {
        thelist.push_back(arr[j]);
    }

    list<int>::reverse_iterator revit;

    revit = thelist.rbegin();
    while (revit != thelist.rend())
    {
        cout << *revit++ << " ";
    }
    cout << endl;

    return 0;
}