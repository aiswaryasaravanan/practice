#include "stdio.h"
#include "stdlib.h"

struct node
{
    int data;
    struct node *next;
} * head;

void insert(int d)
{
    struct node *q, *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->data = d;
    temp->next = NULL;

    if (head == NULL)
        head = temp;
    else
    {
        q = head;
        while (q->next != NULL)
            q = q->next;
        q->next = temp;
    }
}

void showlist()
{
    struct node *q;
    q = head;
    while (q != NULL)
    {
        printf("%d", q->data);
        q = q->next;
    }
}

void delete (int d)
{
    struct node *q;
    q = head;
    if (q->data == q)
        head = q->next;
    else
    {
        while (q->next->data != d && q != NULL)
            q = q->next;
        if (q != NULL)
            q->next = q->next->next;
    }
}

int main()
{
    head = NULL;
    insert(2);
    insert(1);
    insert(3);
    showlist();
    delete (2);
    showlist();
    return 0;
}