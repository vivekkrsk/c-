// set.cpp
// set stores string objects

#pragma warning(disable:4786)
#include <set>
#include <string>
#include <iterator>
#include <iostream>
using namespace std;

int main()
{
    string names[] = {"juanita", "Robert", "Marry", "Amanda", "Marie"};
    set<string, less<string>> nameset(names, names+5);

    set<string, less<string>>::iterator iter;

    nameset.insert("Yvette");
    nameset.insert("Larry");
    nameset.insert("Robert");
    nameset.insert("Barry");
    nameset.erase("Marie");

    cout << "\nSize=" << nameset.size()<<endl;
    iter = nameset.begin();
    while (iter != nameset.end() )
    {
        cout << *iter++<<'\n';
    }
    string searchname;
    cout << "\nEnter names to search for: ";
    cin>> searchname;

    iter = nameset.find(searchname);
    if (iter == nameset.end() )
    {
        cout <<"The name "<< searchname << " is NOT in the set.";
    }
    else
    cout << "The name " << *iter << " IS in the set.";

    cout << endl;
    
    

    return 0;
}