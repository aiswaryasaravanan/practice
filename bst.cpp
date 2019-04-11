//basic bst operations
//Not yet completed

#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *left;
    struct node *right;
} * head;

struct node *insert(struct node *q, int d)
{
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->data = d;
    temp->left = NULL;
    temp->right = NULL;
    if (q == NULL)
        q = temp;
    else
    {
        if (temp->data > q->data)
            q->right = insert(q->right, d);
        else if (temp->data < q->data)
            q->left = insert(q->left, d);
    }
    return q;
}

void print(struct node *q)
{
    if (q == NULL)
    {
        return;
    }
    cout << q->data << endl;
    print(q->left);
    print(q->right);
}

int main()
{
    head = NULL;
    head = insert(head, 0);
    head = insert(head, 2);
    head = insert(head, 1);
    head = insert(head, 3);
    head = insert(head, -2);
    head = insert(head, -1);
    head = insert(head, -3);
    // head = insert(head, );
    cout << head->data << endl;
    cout << head->left->data << endl;
    cout << head->right->data << endl;
    cout << head->right->right->data << endl;
    print(head);
    return 0;
}