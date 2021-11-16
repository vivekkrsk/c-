// pattern6.cpp

#include <iostream>
using namespace std;

int main()
{
      for(int j=1; j<=10; j++)
    {
        for(int i=0; i<(10-j); i++)
        {
            cout << " ";
        }
        for(int i=0; i<j; i++)
        {
            cout << " *";
        }
        cout << endl;
    }

    return 0;
}