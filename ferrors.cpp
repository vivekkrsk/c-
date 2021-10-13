// ferrors.cpp
// checks for error opening file

#include <fstream>
#include <iostream>
using namespace std;

int main()
{
    ifstream file;
    file.open("a:test.dat");

    if(!file)
    {
        cout << "\n Can't open group.DAT";

    }
    else
    {
        cout << "\nFile opened successfully.";
    }

   // cout << "\nfile =" << file;
    cout << "\nError state =" << file.rdstate();
    cout << "\ngood() =" << file.good();
    cout << "\neof() =" <<file.eof();
    cout << "\nfail() =" << file.fail() ;
    cout << "\nbad() =" << file.bad() << endl ;

    return 0;
}