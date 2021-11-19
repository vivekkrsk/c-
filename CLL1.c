// single linkedlist first Node

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node* link;
};

int main()
{
    struct node *head =(struct node *) malloc(sizeof(struct node));
    head->link=37;
    head->link=NULL;
    return 0;
}
