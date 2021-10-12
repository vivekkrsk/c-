// ezprint.cpp
// demostrates simple output to printer

#include <fstream>
#include <iostream>
using namespace std;

int main()
{
    char* s1 = "\nToday's winning number is ";
    int  n1 = 17982;

    ofstream outfile;
    outfile.open("PRN");
    outfile << s1 << n1 << endl;
    outfile << '\x0C';

    return 0;
}