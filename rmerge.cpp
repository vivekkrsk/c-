#include <iostream>
#include <algorithm>
using namespace std;

int s1[]={2,3,4,6,8};
int s2[]={1,3,5};
int dest[8];

int main()
{
    merge(s1,s1+5,s2,s2+3,dest);
    for (int i = 0; i < 8; i++)
    {
        cout<<dest[i]<<" ";
    }
    cout<<endl;

    return 0;
    
}