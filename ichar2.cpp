// ichar2.cpp
// file input with characters

#include <fstream>
#include <iostream>
using namespace std;

int main()
{
    ifstream infile("test2.txt");

    cout << infile.rdbuf();
    cout << endl;

    return 0;
}