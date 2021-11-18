// Linklist 4

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
    linklist li;

    li.additem(1, "Saurabh", "CS", 98.6);
    li.additem(9, "Vivek", "ECE", 93.8);
    li.additem(2, "Abhishek", "IT", 96.2);
    li.additem(6, "Shayam", "CIVIL", 95.5);
    li.additem(3, "Vibhav", "MET", 91.7);

    cout << "Roll number" << setw(10) << "Name" << setw(10) << "Branch" << setw(6) << "Marks" << endl;
    li.display();

    return 0;
}