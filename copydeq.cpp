// copydeq.cpp
// demostrate normal copy with queues

#include <deque>
#include <algorithm>
#include <iostream>
using namespace std;

int main()
{
    int arr1[] = {1,3,5,7,9 };
    int arr2[] = { 2,4,6,8,10 };

    deque<int> d1;
    deque<int> d2;
    for(int j=0; j<5; j++)
    {
        d1.push_back( arr1[j] );
        d1.push_back( arr2[j] );
    }
    copy( d1.begin(), d1.end(),d2.begin() );

    for (int i = 0; i < d2.size(); i++)
    {
       
        cout << d2[i] << ' ';
    }
    cout << endl;
    


    return 0;
}