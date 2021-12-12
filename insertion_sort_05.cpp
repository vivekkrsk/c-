// Insertion sort

#include <iostream>
using namespace std;

int main()
{
    int n,arr[20];
    cout << "Enter length of array ";
    cin >> n;
    cout<<"Enter array element \n";
    for(int i=0; i<n;i++)
    {
        cin>>arr[i];
    }

    cout << "Unsorted array is ";
    for(int i=0; i<n;i++)
    {
        cout << arr[i]<< ' ';
    }

    for(int i=1; i<n; i++)
    {
        int key = arr[i];
        int j= i-1;

        while(j>=0 && arr[j]>key)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }

    cout<<"\nSorted array ";
    for(int i=0; i<n;i++)
    {
        cout << arr[i]<< ' ';
    }



    return 0;
}