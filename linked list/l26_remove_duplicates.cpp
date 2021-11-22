// sorted linked list

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

void remove_duplicates(struct node *q) // 0(n)
{

    struct node *p = q->next;
    while (p)
    {
        if ((p->data) == (q->data))
        {
            q->next = p->next;
            delete p;
            break;
        }
        p = p->next;
        q = q->next;
    }
}
int main()
{

    ll arr[] = {1, 2, 3, 4, 4, 6};
    create(arr, 6);
    display(head);
    remove_duplicates(head);
    display(head);
    return 0;
}