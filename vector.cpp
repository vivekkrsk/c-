// vector.cpp
// demostrates push_back(), operator[], and size()

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;

    v.push_back(10);
    v.push_back(11);
    v.push_back(12);
    v.push_back(13);

    v[0] = 20;
    v[3] = 23;

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << ' ';
    }
    cout << endl;
    

    return 0;
}