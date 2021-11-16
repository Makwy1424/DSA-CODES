//for improving linear search we have two methods these are:----
//a>Transposition(It is not possible as the data are not swap betwwen two nodes).
//b>Move to head

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

void search(node *p, int key)
{
    node *q = NULL;
    while (p != NULL)
    {
        if (p->data == key)
        {
            q->next = p->next;
            p->next = head;
            head = p;
        }
        q = p;
        p = p->next;
    }
}

int main()
{
    int a[] = {1, 2, 3, 4, 5, 6, 7};
    create(a, 7);
    dispaly(head);
    search(head, 4);
    cout << "\n--------------------\n"
         << head->data << endl;
    cout << "========================\n";
    dispaly(head);

    return 0;
}
