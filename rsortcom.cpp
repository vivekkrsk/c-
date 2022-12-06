#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>
using namespace std;

char *names[] = { "George", "Penny", "Estelle", "Don", "Mike", "Bob"};

bool alpha_comp(char*, char*);

int main()
{
    sort(names, names+6, alpha_comp);

    for (int i = 0; i < 6; i++)
    {
        cout << names[i]<< endl;
    }

    return 0;    
}

bool alpha_comp(char *s1, char *s2)
{
    return( strcmp(s1,s2)<0)? true:false;
}