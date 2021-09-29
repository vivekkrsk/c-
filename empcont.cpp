// empcont.cpp
// containership with employees and degrees

#include <iostream>
#include <string>
using namespace std;


class student
{
    private:
    string school;
    string degree;
    public:
    void getedu()
    {
        cout  << "  Enter name of school and unversity: ";
        cin >> school;
        cout << "  Enter highest degree earned\n";
        cout << "  (Highschool, Bachelor's, Master's, PhD): ";
        cin >> degree;
    }

    void putedu() const
    {
        cout <<"\n  School or university: "<<school;
        cout <<"\n  Highest degree earned: "<<degree;
    }
};

class employee
{
private:
    string name;
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

class manager : private employee , private student
{
private:
    string title;
    double dues;
    employee emp;
    student stu;

public:
    void getdata()
    {
        emp.getdata();
        cout << "   Enter title: ";
        cin >> title;
        cout << "   Enter golf club dues: ";
        cin >> dues;
        stu.getedu();
    }

    void putdata() const
    {
        emp.putdata();
        cout << "    Title: " << title;
        cout << "    Golf club dues: " << dues;
        stu.putedu();
    }
};

class scientist : private employee, private student
{
private:
    int pubs;
    employee emp;
    student stu;

public:
    void getdata()
    {
        emp.getdata();
        cout << "   Enter number of pubs: ";
        cin >> pubs;
        stu.getedu();
    }
    void putdata() const
    {
        emp.putdata();
        cout << "\n    Number of publications: " << pubs;
        stu.putedu();
    }
};

class laborer : public employee
{
    private:
    employee emp;
    public:
    void getdata()
    { emp.getdata();}
    void putdata() const
    { emp.putdata();}
};

int main()
{
    manager m1;
    scientist s1,s2;
    laborer l1;

    cout << endl;

    cout << "\nEnter data for manager 1";
    m1.getdata();
    cout << "\nEnter data for scientist 1";
    s1.getdata();
    cout << "\nEnter data for scientist 2";
    s2.getdata();
    cout << "\nEnter data for laberer 1";
    l1.getdata();

    cout << "\nData on manager 1";
    m1.putdata();
    cout << "\nData on scientist 1";
    s1.putdata();
    cout << "\nData on scientist 2";
    s2.putdata();
    cout << "\nData on laborer 1";
    l1.putdata();

    cout << endl;
    return 0;
}