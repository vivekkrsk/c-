// otype.cpp
// imitates TYPE command

#include <fstream>
#include <iostream>
using namespace std;
#include <process.h>

int main(int agrc, char *argv[])
{
    if (agrc != 2)
    {
        cerr << "\nFormat: otype filename";
        exit(-1);
    }
    char ch;
    ifstream infile;
    infile.open(argv[1]);
    if (!infile)
    {
        cerr << "\nCan't open " << argv[1];
        exit(-1);
    }
    while (infile )
    {
        infile.get(ch);
        cout << ch;
    }

    return 0;
}