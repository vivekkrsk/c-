// count.cpp
// count the number of object with specified value

#include <iostream>
#include <algorithm>
using namespace std;

int arr[] = { 33, 22, 33, 44, 55, 66, 77 };

int main()
{
    int n= count(arr,arr+8,33);
    cout <<"There are " << n << " 33's in arr." << endl;

    return 0;
}