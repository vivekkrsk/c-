// Linked list 3

#include <iostream>
#include <string>
using namespace std;

struct link
{
    int roll_number;
    string name;
    string branch;
    float marks;
    link* next;
};

class linklist
{
    private:
    link* first;

    public:
    linklist()
    { first = NULL;}
    void additem(int r, string n, string b, float m);
    void display();
};

void linklist::additem(int r, string n, string b, float m)
{
    link* newlink = new link;
    newlink->roll_number=r;
    newlink->name=n;
    newlink->branch=b;
    newlink->marks=m;
    newlink->next=first;
    first = newlink;
}

void linklist::display()
{
    link* current=first;
    while (current != NULL)
    {
        cout<< current->roll_number<<" "
            << current->name<<"  "
            << current->branch<<"  "
            << current->marks<<"  "<<endl;
        
        current = current->next;
    }
    
}


int main()
{
    linklist li;

    li.additem(1,"Saurabh","CS",9.6);
    li.additem(9,"Vivek","ECE",9.8);
    li.additem(2,"Abhishek","IT",9.2);
    li.additem(6,"Shayam","CIVIL",9.5);
    li.additem(3,"Vibhav","MET",9.7);

    li.display();

    return 0;
}