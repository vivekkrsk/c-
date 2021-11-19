#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node* link;
};
struct node* reverse(struct node *head)
{
    struct node *prev =NULL;
    struct node *next = NULL;
    while (head !=NULL)
    {
        next=head->link;
        head->link=prev;
        prev=head;
        head=next;
    }
    head=prev;
    return head;
    
}

int main()
{
    struct node *head = malloc(sizeof(struct node));
    head = reverse(head);
     ptr = head;
    while (ptr!=NULL)
    {
        printf("%d",ptr->data);
        ptr=ptr->link;
    }
    

    return 0;
}