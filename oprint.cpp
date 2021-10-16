// oprint.cpp
// imitates print command

#include <fstream>
#include <iostream>
using namespace std;
#include <process.h>

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        cerr << "\nFormat: oprint filename";
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

    ofstream outfile;
    outfile.open("PRN");
    while (infile)
    {
        infile.get(ch);
        cout << ch;
    }

    outfile << '\x0C';

    return 0;
}