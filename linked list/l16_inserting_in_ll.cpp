#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node *next;
} *head = NULL;

void create(int a[], int n)
{
    head = new node;
    node *last, *t;
    head->data = a[0];
    head->next = NULL;
    last = head;
    for (int i = 1; i < n; i++)
    {
        t = new node;
        t->data = a[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}

void display(node *p)
{
    cout << "-----------------" << endl;
    while (p != NULL)
    {
        cout << p->data << endl;
        p = p->next;
    }
    cout << "-----------------" << endl;
}

void insert(node *p)
{
    node *l = new node;
    l->data = 0;
    l->next = p; // In case p we can also use head.
    head = l;
}

void any_point(node *p, int n)
{
    node *t = new node;
    t->data = 6;
    for (int i = 0; i < n - 1; i++)
        p = p->next;
    if (p)
    {
        t->next = p->next;
        p->next = t;
    }
}

int main()
{
    int a[] = {1, 2, 3, 4, 5};
    create(a, 5);

    display(head);
    insert(head);

    display(head);
    any_point(head, 3); // Insert 6 at position 4 bcoz linked list is 0 indexed taken.
    display(head);
    return 0;
}

// The inserti ng algorithm have 0(1) in  minimum and 0(n) in maximum.
