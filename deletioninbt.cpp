// deletion in binary tree

#include <bits/stdc++.h>
using namespace std;

struct node
{
    int key;
    struct node *left, *right;
};

struct node *newnode(int key)
{
    struct node *temp = new node;
    temp->key;
    temp->left = temp->right = NULL;
    return temp;
}

void inorder(struct node *temp)
{
    if (!temp)
    {
        return;
    }
    inorder(temp->left);
    cout << temp->key << ' ';
    inorder(temp->right);
}

void deletdeepest(struct node *root, struct node *d_node)
{
    queue<struct node *> q;
    q.push(root);

    struct node *temp;
    while (!q.empty())
    {
        temp = q.front();
        q.pop();
        if (temp == d_node)
        {
            temp = NULL;
            delete (d_node);
            return;
        }
        else
        {
            q.push(temp->right);
        }
        if (temp->left)
        {
            if (temp->left == d_node)
            {
                temp->left = NULL;
                delete (d_node);
                return;
            }
            else
            {
                q.push(temp->left);
            }
        }
    }
}

int main()
{
    

    return 0;
}