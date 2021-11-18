// Linklist 5

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

struct link
{
    int roll_number;
    string name;
    string branch;
    float marks;
    link *next;
};

class linklist
{
private:
    link *first;

public:
    linklist()
    {
        first = NULL;
    }
    void additem(int r, string n, string b, float m);
    void display();
};

void linklist::additem(int r, string n, string b, float m)
{
    link *newlink = new link;
    newlink->roll_number = r;
    newlink->name = n;
    newlink->branch = b;
    newlink->marks = m;
    newlink->next = first;
    first = newlink;
}

void linklist::display()
{
    link *current = first;
    while (current != NULL)
    {
        cout << setw(11) << current->roll_number
             << setw(10) << current->name
             << setw(10) << current->branch
             << setw(6) << std::fixed << setprecision(2) << current->marks << endl;

        current = current->next;
    }
}

int main()
{
    int Roll, student;
    string Name, Branch;
    float Marks;
    linklist li;

    cout << "Enter number of student: ";
    cin >> student;

    for (int i = 0; i < student; i++)
    {
        cout << "Enter Roll Number of student: ";
        cin >> Roll;
        cout << "Enter Name of student: ";
        cin >> Name;
        cout << "Enter Branch of student: ";
        cin >> Branch;
        cout << "Enter Percentage of student: ";
        cin >> Marks;

        li.additem(Roll, Name, Branch, Marks);
    }

    cout << "\n\n";

    cout << "Roll number" << setw(10) << "Name" << setw(10) << "Branch" << setw(6) << "Marks" << endl;
    li.display();

    return 0;
}