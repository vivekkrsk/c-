// Single linked list Node data printing using travers function

#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *link;
};

void traverse(struct node *head)
{
    if (head==NULL)
    {
        cout << "Linked list is empty";
    }

    struct node *ptr=NULL;
    ptr=head;

    while (ptr != NULL)
    {
        cout << ptr->data<<endl;
        ptr= ptr->link;
    }
    
    
}

int main()
{
    struct node *head = new node;
    head->data=10;
    head->link=NULL;

    struct node *current= new node;
    current->data=20;
    current->link=NULL;
    head->link=current;

    current= new node;
    current->data=30;
    current->link=NULL;
    head->link->link=current;

    current= new node;
    current->data=40;
    current->link=NULL;
    head->link->link->link=current;

    current= new node;
    current->data=50;
    current->link=NULL;
    head->link->link->link->link=current;

    traverse(head);

    
    return 0;
}