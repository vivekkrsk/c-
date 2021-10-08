// strimem.cpp
// memory saving string class
// overloaded assignment and copy constructor

#include <iostream>
#include <cstring>
using namespace std;

class strCount
{
private:
    int count;
    char *str;
    friend class String

    strCount(char *s)
    {
        int length = strlen(s);
        str = new char[length + 1];
        strcpy(str, s);
        count = 1;
    }
    ~strCount()
    {
        delete[] str;
    }
};

class String
{
private:
    strCount *psc;

public:
    String()
    {
        psc = new strCount("NULL");
    }

    String(char *s)
    {
        psc = new strCount(s);
    }

    string(String &S)
    {
        psc = S.psc;
        (psc->count)++;
    }
    ~String()
    {
        (psc->count == 1) ? delete psc : (psc->count)--;
    }
    void display()
    {
        cout << psc->str;
        cout << "  (addr = " << psc << ")";
    }
    void operator=(String &S)
    {
        (psc->count == 1) ? delete psc : (psc->count)++;
        psc = S.psc;
        (psc->count)++;
    }
};

int main()
{
    String s3 = "When the fox preaches, look to your geese.";
    cout << "\ns3 = ";
    s3.display();

    String s1;
    s1 = s3;
    cout << "\ns1 = ";
    s1.display();

    String s2(s3);
    cout << "\ns2 = ";
    s2.display();
    cout << endl;

    return 0;
}