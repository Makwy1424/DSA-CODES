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

int misana(struct node *p)
{
    int sum = 0;
    while (p != NULL)
    {
        sum += p->data;
        p = p->next;
    }
    return sum;
}

int misana2(struct node *p)
{
    if (p == NULL)
        return 0;
    return misana2(p->next) + p->data;
}

int main()
{
    int a[] = {1, 2, 3, 4, 5, 6};
    create(a, 6);
    display(head);
    cout << "The sum of the ll is " << misana(head) << endl;
    cout << "The sum by misana 2" << misana2(head) << endl;
    return 0;
}