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

bool check_sort(struct node *p)
{
    ll x = INT32_MIN;
    while (p)
    {
        if (p->data < x)
            return false;
        x = p->data;
        p = p->next;
    }
    return true;
}

int main()
{
    ll arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    create(arr, 9);
    display(head);

    if (check_sort(head) == 1)
        cout << "sorted\n";
    else
        cout << "Not sorted\n";
    return 0;
}