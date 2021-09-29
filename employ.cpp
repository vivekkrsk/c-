// empoly.cpp
// models employee database using inheritance

#include <iostream>
using namespace std;
const int len = 80;

class employee
{
private:
    char name[len];
    unsigned long number;

public:
    void getdata()
    {
        cout << "\n  Enter last name: ";
        cin >> name;
        cout << "\n  Enter number: ";
        cin >> number;
    }
    void putdata() const
    {
        cout << "\n   Name: " << name;
        cout << "\n   Number: " << number;
    }
};

class manager : public employee
{
private:
    char title[len];
    double dues;

public:
    void getdata()
    {
        employee::getdata();
        cout << "   Enter title: ";
        cin >> title;
        cout << "   Enter golf club dues: ";
        cin >> dues;
    }

    void putdata() const
    {
        employee::putdata();
        cout << "    Title: " << title;
        cout << "    Golf club dues: " << dues;
    }
};

class scientist : public employee
{
private:
    int pubs;

public:
    void getdata()
    {
        employee::getdata();
        cout << "   Enter number of pubs: ";
        cin >> pubs;
    }
    void putdata() const
    {
        employee::putdata();
        cout << "\n    Number of publications: " << pubs;
    }
};

class laborer : public employee
{
};

int main()
{
    manager m1, m2;
    scientist s1;
    laborer l1;

    cout << endl;

    cout << "\nEnter data for manager 1";
    m1.getdata();
    cout << "\nEnter data for manager 2";
    m2.getdata();
    cout << "\nEnter data for scientist 1";
    s1.getdata();
    cout << "\nEnter data for laberer 1";
    l1.getdata();

    cout << "\nData on manager 1";
    m1.putdata();
    cout << "\nData on manager 2";
    m2.putdata();
    cout << "\nData on scientist 1";
    s1.putdata();
    cout << "\nData on laborer 1";
    l1.putdata();

    cout << endl;
    return 0;
}