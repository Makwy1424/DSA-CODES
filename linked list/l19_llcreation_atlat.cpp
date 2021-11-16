#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node *next;
} *head = NULL;

void create(int a[], int n)
{
    node *t, *last;
    head = new node;
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
    cout << "--------------------------------\n";
    while (p != NULL)
    {
        cout << p->data << endl;
        p = p->next;
    }
    cout << "--------------------------------\n";
}

int count(node *p)
{
    int l = 0;
    while (p != NULL)
    {
        l++;
        p = p->next;
    }
    return l;
}
// zero means at the begining and then
// after for all index the value is
// inserted after the index given.
void insert(node *p, int index, int n)
{
    node *t = new node;
    t->data = n;
    if (index < 0 || index > count(p))
    {
        return;
    }
    if (index == 0)
    {
        t->next = head;
        head = t;
    }
    else
    {
        for (int i = 0; i < index - 1; i++)
            p = p->next;
        t->next = p->next;
        p->next = t;
    }
}
int main()
{
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    create(a, 9);
    display(head);
    insert(head, 3, 54);
    display(head);
    return 0;
}