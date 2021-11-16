#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node *next;
} *head = NULL;

void create(node *p, int n, int v)
{
    node *t = new node;
    t->data = v;
    for (int i = 0; i < n - 1; i++)
        p = p->next;
    if (p)
    {
        t->next = p->next;
        p->next = t;
    }
}
void display(node *p)
{
    cout << "--------------------------" << endl;
    while (p != NULL)
    {
        cout << p->data << endl;
        p = p->next;
    }
    cout << "--------------------------" << endl;
}

int count(struct node *p)
{
    int l = 0;
    while (p != NULL)
    {
        l++;
        p = p->next;
    }
    return l;
}
void insert(struct node *p, int index, int x)
{
    struct node *t;
    int i;
    if (index < 0 || index > count(p))
        return;
    t = new node;
    t->data = x;
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
    insert(head, 0, 90);
    insert(head, 1, 91);
    insert(head, 2, 92);
    display(head);
    return 0;
}