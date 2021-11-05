// initer.cpp
// demostrates istream_iterator

#include <algorithm>
#include <list>
#include <iterator>
#include <iostream>
using namespace std;

int main()
{
    list<float> flist(5);

    cout << "\nEnter 5 floating point number: ";

    istream_iterator<float> cin_iter(cin);
    istream_iterator<float> end_of_stream;

    copy(cin_iter, end_of_stream, flist.begin() );

    cout << endl;
    ostream_iterator<float> ositer(cout, "--");
    copy(flist.begin(), flist.end(), ositer);
    cout << endl;

    return 0;
}