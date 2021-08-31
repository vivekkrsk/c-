// multitable.cpp

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
cout << "Table of 6 is"<<endl;

for(int i=1; i<=10;i++)
{
    cout<<setw(3) << "6 *"<<setw(3)<<i<<" ="<<setw(3)<<6*i<<endl;
}

return 0;
}
