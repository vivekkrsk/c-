// iter copy.cpp
// user iterator for copy() algorithm

#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int main()
{
    int beginRange, endRange;
    int arr[] = {11, 13, 15, 17, 19, 21, 23, 25, 27, 29};
    vector<int> v1(arr, arr + 10);
    vector<int> v2(10);

    cout << "Enter range to be copied(example: 2 5): ";
    cin >> beginRange>> endRange;

    vector<int>::iterator iter1 = v1.begin() + beginRange;
    vector<int>::iterator iter2 = v1.begin() + endRange;
    vector<int>::iterator iter3;

    iter3 = copy(iter1, iter2, v2.begin());

    iter1 = v2.begin();
    while (iter1 != iter3)
    {
        cout << *iter1++ << ' ';
    }
    cout << endl;

    return 0;
}