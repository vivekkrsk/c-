#include <iostream>
#include <cstring>
#include <string>
#include <algorithm>
using namespace std;

bool isdon(string name)
{
    return name == "Don";
}

char *names[] = { "George", "Penny", "Estelle", "Don", "Mike", "Bob"};

int main()
{
    string *ptr;
    ptr=find_if(names, names+6, isdon);
    
    if(ptr==names+6)
    cout<< "Don is not on the list.\n";
    else
    cout<<"Don is element "<<(ptr-names);

    return 0;

}