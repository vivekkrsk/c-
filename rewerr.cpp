// rewerr.cpp
// handeles errors during input and output

#include <fstream>
#include <iostream>
using namespace std;
#include <process.h>

const int MAX = 1000;
int buff[MAX];

int main()
{
    for (int i = 0; i < MAX; i++)
    {
        buff[i] = i;
    }
    ofstream os;

    os.open("a:edata.dat", ios::trunc | ios::binary);
    if (!os)
    {
        cerr << "Could not open outfile file \n";
        exit(1);
    }
    os.close();

    for (int i = 0; i < MAX; i++)
    {
        buff[i] = 0;
    }

    ifstream is;
    is.open("a:edata.dat", ios::binary);
    if (!is)
    {
        cerr << "Could not read from file\n";
        exit(1);
    }
    cout << "Reading...\n";
    is.read(reinterpret_cast<char *>(buff), MAX * sizeof(int));
    if (!is)
    {
        cerr << "Could not read from file\n";
        exit(1);
    }

    for (int i = 0; i < MAX; i++)
    {
        if (buff[i] != i)
        {
            cerr << "\nData is incorrect\n";
            exit(1);
        }
    }
    cout << "Data is correct";

    return 0;
}