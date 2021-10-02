// newstr.cpp
// using new to get memory for strings

#include <iostream>
#include <cstring>
using namespace std;

class String
{
private:
    char* str;
public:
String(char* s)
{
    int length = strlen(s);
    str = new char[length+1];
    strcpy(str, s);
}

~String()
{
    cout << "Deleting str.\n";
    delete[] str;
}
void display()
{
    cout << str << endl;
}
    
};

int main()
{
    String s1 = "Who knows nothing doubts nothing.";

    cout << "s1 = ";
    s1.display();

    return 0;
}