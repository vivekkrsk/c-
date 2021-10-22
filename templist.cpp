// templist.cpp
// implements linked list as a template

#include <iostream>
using namespace std;

template <class Type>
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
    linklist<double> ld;

    ld.additem(151.5);
    ld.additem(262.6);
    ld.additem(373.7);
    ld.display();

    linklist<char> lch;

    lch.additem('a');
    lch.additem('b');
    lch.additem('c');
    lch.display();
    cout << endl;

    return 0;
}