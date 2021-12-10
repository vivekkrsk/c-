// Insertion sort
// sort the given array in increasing order

#include <iostream>
using namespace std;

int main()
{
    int arr[6]={5,2,4,6,1,3};

    for(int j=1;j<6;j++)
    {
        int key=arr[j];
        int i=j-1;
        
        while (i>=0&&arr[i]>key)
        {
            arr[i+1]=arr[i];
            i--;
        }
        arr[i+1]=key;
        
    }

    for (int i = 0; i < 6; i++)
    {
        cout << arr[i]<<' ';
    }
    

    return 0;
}