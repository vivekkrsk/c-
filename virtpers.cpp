// virtpers.cpp
// virtual function with person class

#include <iostream>
using namespace std;

class person
{
protected:
    char name[40];

public:
    void getname()
    {
        cout << "   Enter name: ";
        cin >> name;
    }

    void putname()
    {
        cout << "Name is: " << name << endl;
    }

    virtual void getData() = 0;

    virtual bool isoutstanding() = 0;
};

class student : public person
{
private:
    float gpa;

public:
    void getData()
    {
        person ::getname();
        cout << "   Enter student's GPA: ";
        cin >> gpa;
    }
    bool isoutstanding()
    {
        return (gpa > 3.5) ? true : false;
    }
};

class professor : public person
{
private:
    int numPubs;

public:
    void getData()
    {
        person::getname();
        cout << "   Enter number of professor's publications: ";
        cin >> numPubs;
    }

    bool isoutstanding()
    {
        return (numPubs > 100) ? true : false;
    }
};

int main()
{
    person *persptr[100];
    int n = 0;
    char choice;

    do
    {
        cout << "Enter student or professor (s/p): ";
        cin >> choice;
        (choice == 's') ? persptr[n] = new student : persptr[n] = new professor;

        persptr[n++]->getData();
        cout << "  Enter another (y/n)? ";
        cin >> choice;

    } while (choice == 'y');

    for (int i = 0; i < n; i++)
    {
        persptr[i]->putname();
        if (persptr[i]->isoutstanding())
        {
            cout << "  This person is outstanding\n";
        }
    }

    return 0;
}