// Single linked list using two pointer

#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *link;
};

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

    cout << head->data << endl;
    cout << head->link->data << endl;
    cout << head->link->link->data << endl;
    cout << head->link->link->link->data << endl;
    cout << head->link->link->link->link->data << endl;


    return 0;
}