// strequal.cpp
// overloaded '==' operator compares strings

#include <iostream>
#include <string.h>
using namespace std;

class String
{
private:
    enum
    {
        SZ = 80
    };
    char str[SZ];

public:
    String()
    {
        strcpy(str, "");
    }
    String(char s[])
    {
        strcpy(str, s);
    }
    void display() const
    {
        cout << str;
    }
    void getstr()
    {
        cin.get(str, SZ);
    }
    bool operator==(String ss) const
    {
        return (strcmp(str, ss.str) == 0) ? true : false;
    }
};

int main()
{
    String s1 = "yes";
    String s2 = "no";
    String s3;

    cout << "\nEnter yes or no: ";
    s3.getstr();

    if (s3 == s1)
    {
        cout << "You typed yes\n";
    }
    else if (s3==s2)
    {
        cout << "You typed no\n";
    }
    
    else
        cout << "You didn't follow instruction\n";

    return 0;
}