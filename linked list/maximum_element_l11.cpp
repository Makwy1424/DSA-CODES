#include <bits/stdc++.h>
using namespace std;
const int MIN_INT = -32768;
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

int maxi(struct node *p)
{
    int m = MIN_INT;
    while (p)
    {
        if (p->data > m)
            m = p->data;
        p = p->next;
    }
    return m;
}

int maxi2_p(struct node *p)
{
    int x = 0;
    if (p == NULL)
        return MIN_INT;
    x = maxi2_p(p->next);
    return x > p->data ? x : p->data;
}
int maxi2(struct node *p)
{
    if (p == NULL)
        return MIN_INT;
    return maxi2(p->next) > p->data ? maxi2(p->next) : p->data;
}

int main()
{
    int a[] = {1, 2, 3, 4, 5};
    create(a, 5);
    dispaly(head);
    cout << "The maximum element in the ll is: " << maxi(head) << endl;
    cout << "the maximum by maxi2_p is " << maxi2_p(head) << endl;
    cout << "The maximum element in the ll is by recursion: " << maxi2(head) << endl;
    return 0;
}