// rewobj.cpp
// person objects do disk I/O

#include <fstream>
#include <iostream>
using namespace std;

class person
{
protected:
    char name[40];
    int age;

public:
    void getdata()
    {
        cout << "\n Enter name: ";
        cin >> name;
        cout << "\n Enter age: ";
        cin >> age;
    }
    void showdata(void)
    {
        cout << "\n  Name: " << name;
        cout << "\n  Age: " << age;
    }
    void diskin(int);
    void diskout();
    static int diskcount();
};

void person::diskin(int pn)
{
    ifstream infile;
    infile.open("PERSFILE.DAT", ios::binary);
    infile.seekg(pn * sizeof(person));
    infile.read((char *)this, sizeof(*this));
}

void person::diskout()
{
    ofstream outfile;

    outfile.open("PERSFILE.DAT", ios::binary);
    outfile.write((char *)this, sizeof(*this));
}

int person::diskcount()
{
    ifstream infile;

    infile.open("PERSFILE.DAT", ios::binary);
    infile.seekg(0, ios::end);

    return (int)infile.tellg() / sizeof(person);
}
int main()
{
    person p;
    char ch;

    do
    {
        cout << "Enter data for person:";
        p.getdata();
        p.diskout();
        cout << "Do another (y/n)?";
        cin >> ch;
    } while (ch == 'y');

    int n = person::diskcount();
    cout << "There are " << n << " person in file\n";

    for (int i = 0; i < n; i++)
    {
        cout << "\nPerson " << i;
        p.diskin(i);
        p.showdata();
    }
    cout << endl;

    return 0;
}