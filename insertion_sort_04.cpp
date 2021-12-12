// Insertion sort 04

#include <iostream>
using namespace std;

int main()
{
    int n, arr[20], i;
    cout << "Enter the size of array between 1 to 20 ";
    cin >> n;

    cout << "Enter the elements in array\n";
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "\nUnsorted array is ";
    for (i = 0; i < n; i++)
    {
        cout << arr[i]<<' ';
    }

    for (i = 1; i < n; i++)
    {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }

    cout << "\nSorted array is ";
    for (i = 0; i < n; i++)
    {
        cout << arr[i]<<' ';
    }

    return 0;
}