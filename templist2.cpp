// templist2.cpp
// implements linkedlist as template
// demostrate linklist with  employee class

#include <iostream>
using namespace std;

const int LEN = 80;

class employee
{
private:
    char name[LEN];
    unsigned long number;
public:
friend istream& operator >> (istream& s, employee& e);
friend ostream& operator << (ostream& s, employee& e);
    
};

istream& operator >> (istream& s, employee& e)
{
    cout << "\n Enter last name: "; cin >> e.name;
    cout << "\n Enter number: "; cin >> e.number;
    return s;
}

ostream& operator << (ostream& s, employee& e)
{
    cout << "\n Name: " << e.name;
    cout << "\n Number: " << e.number;
}

template<class Type>
struct link
{
    Type data;
    link* next;
};

template<class Type>
class linklist
{
private:
    link<Type>* first;
public:
linklist()
{ first = NULL; }
void additem(Type d);
void display();
    
};

template <class Type>
void linklist<Type>::additem(Type d)
{
    link<Type>* newlink = new link<Type>;
    newlink -> data = d;
    newlink -> next = first;
    first = newlink;
}

template <class Type>
void linklist<Type>::display()
{
    link<Type>* current = first;
    while ( current != NULL)
    {
        cout << endl <<current->data;
        current = current->next;
    }
    
}


int main()
{
    linklist<employee> lemp;
    employee emptemp;
    char ans;

    do
    {
        cin >> emptemp;
        lemp.additem(emptemp);
        cout << "\nAdd another (y/n)? ";
        cin >> ans;
    } while (ans !='n');
    lemp.display();
    cout << endl;

    return 0;
}