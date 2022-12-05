#include <iostream>
#include <algorithm>
using namespace std;

int arr[] = {45,2,22,-17,0,-30,25,55};

int main()
{
    sort(arr,arr+8);

    for (int i = 0; i < 8; i++)
    {
        cout<< arr[i]<< " ";
    }
    cout << endl;

    return 0;
    
}