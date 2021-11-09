// setrange.cpp
// test ranges within a set

#pragma warning (disable:4786)
#include <set>
#include <string>
#include <iterator>
#include <iostream>
using namespace std;

int main()
{
    set<string, less<string>> organic;
    set<string, less<string>> :: iterator iter;

organic.insert("Curine"); 
organic.insert("Xanthine");
organic.insert("Curarine");
organic.insert("Melamine");
organic.insert("Cyanimide");
organic.insert("Phenol");
organic.insert("Aphrodine");
organic.insert("Imidazole");
organic.insert("Cinchonine");
organic.insert("Palmitamide");
organic.insert("Cyanimide");

iter = organic.begin();
while (iter != organic.end() )
{
    cout << *iter++<< '\n';
}

string lower, upper;
cout << "\nEnter range (example C czz): ";
cin >> lower >> upper;
iter= organic.lower_bound(lower);
while (iter != organic.upper_bound(upper))
{
    cout << *iter++ << '\n';
}


    return 0;
}