// find_if.cpp
// searches arry of strings for firdt names that matches "Don"

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool isdon( string name)
{
    return name=="Don";
}

string names[] = { "George", "EStelle", "Don", "Mike", "Bob"};

int main()
{
    string* ptr;
    ptr = find_if(names, names+5, isdon);

    if (ptr==names+5)
    {
        cout << "Don is not on the list. \n";
    }
    else
    {
        cout << "Don is element "
             << (ptr-names)
             << " on the list.\n";
    }
    

    return 0;
}