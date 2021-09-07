//ch5-q23.cpp

#include <iostream>
using namespace std;

inline float foobar(float fav)
{
    cout << fav +1<<endl;
    return fav;
}

int main()
{
   int a= foobar(3.14);

    cout << a;

    return 0;
}