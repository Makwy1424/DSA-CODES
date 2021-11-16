#include <bits/stdc++.h>
using namespace std;
#define ll long long
struct node
{
    ll data;
    struct node *next;
};

struct node *head = NULL;

void create(int arr[], int size)
{
    struct node *t, *last;
    head = new node;
    head->data = arr[0];
    head->next = NULL;
    last = head;
    for (ll i = 1; i < size; i++)
    {
        t = new node;
        t->data = arr[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}

void display(struct node *p)
{
    while (p != NULL)
    {
        cout << p->data << " ";
        p = p->next;
    }
    cout << "\n";
}

void insert(ll value) // min=0(1) and max=0(n).
{
    struct node *q = NULL, *p = head, *t;
    t = new node;
    t->data = value;
    if (head->data >= value)
    {
        t->next = head;
        head = t;
    }
    else
    {

        while (p && p->data < value)
        {
            q = p;
            p = p->next;
        }

        if (p)
        {
            t->next = p;
            q->next = t;
        }
    }
}
int main()
{

    int arr[] = {1, 2, 3, 4, 5, 7, 8, 9};
    create(arr, 8);
    display(head);
    insert(0);
    display(head);
    insert(6);
    display(head);
    return 0;
}