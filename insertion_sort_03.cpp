// insertion sort

#include <iostream>
using namespace std;

int main()
{
    int n, arr[10];
    cout << "Enter the length of sequence between 1 to 10 ";
    cin >> n;

    cout << "Enter the value of sequence \n";

    for (int j = 0; j < n; j++)
    {
        cin >> arr[j];
    }

    for (int j = 1; j < n; j++)
    {
        int key = arr[j];
        int i = j - 1;

        while (i >= 0 && arr[i] > key)
        {
            arr[i + 1] = arr[i];
            i--;
        }
        arr[i + 1] = key;
    }

    cout << "Sequence in increasing order is ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << ' ';
    }

    for (int j = 1; j < n; j++)
    {
        int key = arr[j];
        int i = j - 1;

        while (i >= 0 && arr[i] < key)
        {
            arr[i + 1] = arr[i];
            i--;
        }
        arr[i + 1] = key;
    }

    cout << "\nSequence in decreasing order is ";

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << ' ';
    }

    return 0;
}