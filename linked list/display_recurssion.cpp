#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node *next;
} *head = NULL;
void create(int a[], int n)
{
    struct node *last, *t;
    head = (struct node *)malloc(sizeof(struct node));
    head->data = a[0];
    head->next = NULL;
    last = head;
    for (int i = 1; i < n; i++)
    {
        t = (struct node *)malloc(sizeof(struct node));
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
        cout << p->data << endl;
        p = p->next;
    }
}
void recursion(struct node *p)
{
    if (p != NULL)
    {
        recursion(p->next);
        cout << p->data << endl;
    }
}
int main()
{
    int a[] = {1, 2, 3, 4, 5, 6};
    create(a, 6);
    cout << "---------------------\n   Normal Display\n---------------------\n";
    display(head);
    cout << "---------------------\n   Recursion\n---------------------\n";
    recursion(head);
    return 0;
}