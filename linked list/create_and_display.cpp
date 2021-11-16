#include <iostream>
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
    struct node *last, *t;
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

void display(struct node *p)
{
    while (p != NULL)
    {
        cout << " " << p->data << endl;
        p = p->next;
    }
}

int main()
{
    int a[] = {1, 2, 3, 4, 5, 6, 7};
    create(a, 7);
    display(head);
    return 0;
}