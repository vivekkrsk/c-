// tempfind.cpp
// tempate used for function that finds number in array

#include <iostream>
using namespace std;

template <class atype>
int find(atype* array, atype value, int size)
{
    for( int j=0; j<size; j++)
    {
        if (array[j]==value)
        {
            return j;
        }
        
    }
    return -1;
    
}

char chrarr[] = {1, 3, 5, 11, 13};
char ch=5;
int intarr[] =  {1, 3, 5, 11, 13};
int in=6;
long lonarr[] =  {1L, 3L, 5L, 11L, 13L};
long lo = 11L;
double dubarr[] =  {1.0, 3.0, 5.0, 11.0, 13.0};
double db = 4.0;


int main()
{
    cout << "\n 5 in charray: index = " << find(chrarr, ch, 6);
    cout << "\n 6 in intrray: index = " << find(intarr, in, 6);
    cout << "\n11 in lonrray: index = " << find(lonarr, lo, 6);
    cout << "\n 4 in dubrray: index = " << find(dubarr, db, 6);

    cout << endl;

    return 0;
}