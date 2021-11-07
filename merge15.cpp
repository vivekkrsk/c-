// merge.cpp
// merge two container into a third

#include <iostream>
#include <algorithm>
using namespace std;

int src1[] = { 2, 3, 4, 6, 8 };
int src2[] = { 1, 3, 5 };
int dest[8];

int main()
{
    merge(src1, src1+5,src2, src2+3,dest);

    for (int i = 0; i < 8; i++)
    {
        cout << dest[i] << ' ';
    }
    cout << endl;
    

    return 0;
}