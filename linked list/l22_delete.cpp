#include <bits/stdc++.h>
using namespace std;
#define ll long long
struct node
{
    ll data;
    struct node *next;
};

struct node *head = NULL;

void create(ll arr[], ll size)
{
    struct node *last, *t;
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

    while (p)
    {
        cout << p->data << " ";
        p = p->next;
    }
    cout << endl;
}

void deleteelement(ll pos)
{

    if (pos == 0)
    {
        struct node *p = head;
        head = head->next;
        ll x = p->data;
        cout << "The value is deleted: " << x << endl;
        delete p;
    }
    else
    {
        struct node *q = NULL, *p = head;
        for (ll i = 0; i < pos - 1; i++)
        {
            q = p;
            p = p->next;
        }
        q->next = p->next;
        ll x = p->data;
        cout << "The value of x= " << x << endl;
        delete p;
    }
}

int main()
{
    ll arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    create(arr, 9);
    display(head);
    deleteelement(0);
    display(head);

    deleteelement(0);
    display(head);
    return 0;
}