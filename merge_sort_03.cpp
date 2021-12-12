// Merge sort 02

#include <iostream>
using namespace std;

void merge(int arr[], int p, int q, int r)
{
    int n1= q-p+1;
    int n2= r-q;

    int L[n1],R[n2];

    for (int i = 0; i < n1; i++)
    {
        L[i]=arr[p+i];
    }
    for(int j=0; j< n2; j++)
    {
        R[j]=arr[q+j+1];
    }
    L[n1]=INT_MIN;
    R[n2]=INT_MIN;

    int i=0,j=0;

    for(int k=p; k<=r; k++)
    {
        if (L[i]>=R[j])
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

void merge_sort(int arr[],int p, int r)
{
    if (p<r)
    {
        int q= (p+r)/2;
        merge_sort(arr,p,q);
        merge_sort(arr,q+1,r);
        merge(arr,p,q,r);
    }
    
}

int main()
{
    int n;
    cout << "Enter the length of array ";
    cin >> n;
    int arr[n];
    cout <<"Enter the array element \n";
    for(int i=0; i<n; i++)
    {
        cin>> arr[i];
    }

    cout << "Unsorted array is ";
    for(int i=0; i<n; i++)
    {
        cout <<  arr[i]<<' ';
    }

    merge_sort(arr,0,n-1);

    cout << "\nSorted array is ";
    for(int i=0; i<n; i++)
    {
        cout <<  arr[i]<<' ';
    }

    return 0;
}