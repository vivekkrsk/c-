// count2.cpp

#include <iostream>
using namespace std;

int main()
{
    int arr[] = { 33, 22, 33, 44, 55, 66, 77 };
    int y=0;

    for(int i=0; i<7; i++)
    {
        if(arr[i]==33)
        {
          y++;
        }
    }
   cout <<"There are " << y << " 33's in arr." << endl;

    return 0;
}