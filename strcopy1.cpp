// strcopy1.cpp
// copies a string using for loop

#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int i, j;
    char str1[] = "Oh, captain, my Caption!"
                  "our fearful trip is done";

    j = strlen(str1);

    const int MAX = 80;
    char str2[MAX];

    for (int i = 0; i < strlen(str1); i++)
    {
        str2[i] = str1[i];
    }
    str2[j] = '\0';
    cout << str2 << endl;

    return 0;
}