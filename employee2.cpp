// employ2.cpp
// multiple level of inheritance

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

class foreman : public laborer
{
    private:
    float quotas;
    public:
    void getdata()
    {
        laborer::getdata();
        cout << "  Enter quotas: "; cin >> quotas;
    }
    void putdata() const
    {
        laborer::putdata();
        cout << "\n   Quotas: "<< quotas;
    }
};

int main()
{
   
    laborer l1;
    foreman f1;

    cout << endl;
    
    cout << "\nEnter data for laborer 1";
    l1.getdata();
    cout << "\nEnter data for foreman 1";
    f1.getdata();

    cout << endl;

    cout << "\nData on laborer 1";
    l1.putdata();
    cout << "\nData on foreman 1";
    f1.putdata();
   

    cout << endl;
    return 0;
}