// Merge sort 01

#include <iostream>
using namespace std;

void merge(int arr[], int p, int q,int r)
{
    int n1 = q-p+1;
    int n2 = r-q;

    int L[n1],R[n2];

    for (int i = 0; i < n1; i++)
    {
        L[i]=arr[p+i];
    }
    for (int j = 0; j < n2; j++)
    {
        R[j]=arr[q+j+1];
    }

    L[n1]=INT_MAX;
    R[n2]=INT_MAX;

    int i=0,j=0;
    for(int k=p; k<=r;k++)
    {
        if (L[i]<=R[j])
        {
            arr[k]=L[i];
            i++;
        }
        else
        {
            arr[k]=R[j];
            j++;
        }
        
    }

    
}

void merge_sort( int arr[], int p, int r)
{
    if (p<r)
    {
        int q = (p+r)/2;
        merge_sort(arr,p,q);
        merge_sort(arr,q+1,r);
        merge(arr,p,q,r);
    }
    
}

int main()
{
    int arr[]={9,8,7,6,5,4,3,2,1};

    merge_sort(arr,0,9);

    cout << "Sorted array is ";
    for (int i = 0; i < 9; i++)
    {
        cout << arr[i]<<' ';
    }
    

    return 0;
}