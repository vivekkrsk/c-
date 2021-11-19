// single linked list Method 1

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *link;
};

int main()
{
    struct node *head = malloc(sizeof(struct node));
    head->link = 37;
    head->link = NULL;

    struct node *current = malloc(sizeof(struct node));
    current->link = 98;
    current->link = NULL;
    head->link = current;

    struct node *current2 = malloc(sizeof(struct node));
    current2->link = 68;
    current2->link = NULL;
    current->link = current2;

    return 0;
}