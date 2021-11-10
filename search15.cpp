// search15.cpp
// search one container for sequence of another container

#include <iostream>
#include <algorithm>
using namespace std;

int source[] = {11, 44, 33, 11, 22, 33, 11, 22, 44};

int pattern[] = {11, 22, 33};

int main()
{
    int *ptr;
    ptr = search(source, source + 9, pattern, pattern + 3);


    (ptr == source + 9) ? cout << "No match found\n" : cout << "Match at " << (ptr - source) << endl;

    return 0;
}