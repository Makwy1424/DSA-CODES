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

void dispaly(struct node *p)
{
    while (p != NULL)
    {
        cout << p->data << endl;
        p = p->next;
    }
}

struct node *search(struct node *p, int key)
{
    if (p == NULL)
        return NULL;
    if (p->data == key)
        return p;
    return search(p->next, key);
}

struct node *search2(struct node *p, int key)
{
    while (p != NULL)
    {
        if (key == p->data)
            return p;

        p = p->next;
    }
    return NULL;
}

int main()
{
    int a[] = {1, 2, 3, 4, 5, 6, 7};
    create(a, 7);
    dispaly(head);
    cout << "-------------------------------\n";
    node *adress_4 = search(head, 4);
    cout << adress_4->data << endl;
    node *adress_4r = search2(head, 4);
    cout << adress_4r->data << endl;
    cout << "---------------------------------\n";

    return 0;
}