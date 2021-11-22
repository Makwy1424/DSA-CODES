// reverse value
// reverse links
// This is the example of value method
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

    while (p)
    {
        cout << p->data << " ";
        p = p->next;
    }
    cout << endl;
}

void reversell(struct node *p)
{
    ll arr[100], size = 0;
    while (p)
    {
        arr[size] = p->data;
        size++;
        p = p->next;
    }
    p = head;
    while (p)
    {
        p->data = arr[size - 1];
        size--;
        p = p->next;
    }
}

int main()
{

    ll arr[] = {1, 2, 3, 4, 5, 6, 7};

    create(arr, 7);
    display(head);

    reversell(head);
    display(head);

    return 0;
}