//strcopy.cpp
// copy a string using strcpy() function

#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char str1[] = "Tiger, tiger, burning bright\n"
                  "In the forests of the night";
 
    const int MAX = 80;
    char str2[MAX];

    strcpy(str2, str1);

    cout << str2 << endl;

    return 0;
}