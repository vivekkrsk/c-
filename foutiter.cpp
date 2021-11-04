// foutiter.cpp
// demostrates ostream ostream_iterator with files

#include <fstream>
#include <algorithm>
#include <list>
#include <iterator>
using namespace std;

int main()
{
    int arr[] = {11, 21, 31, 41, 51};
    list<int> thelist;

    for (int i = 0; i < 5; i++)
    {
        thelist.push_back(arr[i]);
    }
    ofstream outfile("ITER.DAT");

    ostream_iterator<int> ositer(outfile, " ");

    copy(thelist.begin(), thelist.end(), ositer);

    return 0;
}