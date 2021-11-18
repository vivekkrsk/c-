// Linked list 2

#include <iostream>
using namespace std;

struct link
{
    int data;
    char character;
    float value;
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
    void additem(int d, char c, float v);
    void disply();
};

void linklist::additem(int d, char c, float v)
{
    link *newlink = new link;
    newlink->data = d;
    newlink->character = c;
    newlink->value = v;
    newlink->next = first;
    first = newlink;
}

void linklist::disply()
{
    link *current = first;
    while (current != NULL)
    {
        cout << current->data << ' ' << current->character << ' ' << current->value << endl;
        current = current->next;
    }
}

int main()
{
    linklist li;

    li.additem(1, 'a', 0.01);
    li.additem(2, 'b', 0.02);
    li.additem(3, 'c', 0.03);
    li.additem(4, 'd', 0.04);
    li.additem(5, 'e', 0.05);

    li.disply();

    return 0;
}