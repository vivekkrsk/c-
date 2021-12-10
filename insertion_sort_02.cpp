// insertion sort
// sort the given array in decreasing order

#include <iostream>
using namespace std;

int main()
{
    int arr[10]={10,5,9,1,3,7,2,8,6,4};

    for(int i=1; i<10;i++)
    {
       int key = arr[i];
       int j=i-1;

       while(j>=0 && arr[j]<key)
       {
           arr[j+1]=arr[j];
           j--;
       }
       arr[j+1]=key;
    }

    for (int i = 0; i < 10; i++)
    {
        cout << arr[i]<<' ';
    }
    

    return 0;
}