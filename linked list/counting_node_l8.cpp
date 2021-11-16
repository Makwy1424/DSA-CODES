#include <iostream>
#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node *next;
} * head;

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

int count(struct node *p)
{
    int c = 0;
    while (p != NULL)
    {
        c++;
        p = p->next; //o(n),space=o(1)
    }
    return c;
}
int count2(struct node *p)
{
    if (p == NULL) //o(n),space=0(n)
        return 0;
    return count2(p->next) + 1;
}
int main()
{
    int a[] = {1, 2, 3, 4, 5, 6, 7};
    create(a, 7);
    cout << "----------------------------------------\n";
    display(head);
    cout << "The size of the ll is " << count(head) << endl;
    cout << "----------------------------------------\n";
    cout << "The size of the ll by count2 process is " << count2(head) << endl;
    cout << "----------------------------------------\n";
    return 0;
}