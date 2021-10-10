// binio.cpp
// binary input and output with integers

#include <fstream>
#include <iostream>
using namespace std;
const int MAX =100;
int buff[MAX];

int main()
{
    for(int j=0; j<MAX; j++)
    buff[j] = j;

    ofstream os("edata.dat", ios::binary);

    os.write( reinterpret_cast<char*>(buff), MAX*sizeof(int));

    for(int j =0; j<MAX; j++)
    buff[j] =0;

    ifstream is("edata.dat", ios::binary);
    is.read( reinterpret_cast<char*>(buff), MAX*sizeof(int));

    for(int j=0; j<MAX; j++)
    if(buff[j] != j)
    { cerr << "Data is incorrect\n"; return 1; }

    cout << "Data is correct\n";

    return 0;
}