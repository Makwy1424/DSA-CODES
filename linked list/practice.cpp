// Creating and Displaying for linkedlist.

// #include <bits/stdc++.h>

// using namespace std;

// #define ll long long

// struct node
// {
//     int data;
//     struct node *next;
// };                             //Self referencial structure
// struct node *Head;

// void create(ll arr[], int n)
// {
//     struct node *last, *t;
//     Head = new struct node;
//     Head->data = arr[0];
//     Head->next = NULL;
//     last = Head;
//     for (int i = 1; i < n; i++)
//     {
//         t = new struct node;
//         t->data = arr[i];
//         t->next = NULL;
//         last->next = t;
//         last = t;
//     }
// }

// void display(struct node *p)
// {
//     while (p != NULL)
//     {
//         cout << p->data << " ";
//         p = p->next;
//     }
// }

// int main()
// {
//     ll arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
//     create(arr, 9);
//     display(Head);
// }

// QUESTION-2

// #include <bits/stdc++.h>

// using namespace std;

// #define ll long long

// struct node
// {
//     ll data;
//     struct node *next;
// };

// struct node *head = NULL;

// void create(int a)
// {
//     static struct node *last;
//     if (head == NULL)
//     {
//         head = new node;
//         head->data = a;
//         head->next = NULL;
//         last = head;
//     }
//     else
//     {
//         struct node *t;
//         t = new node;
//         t->data = a;
//         t->next = NULL;
//         last->next = t;
//         last = t;
//     }
// }

// void display(struct node *p)
// {
//     while (p != NULL)
//     {
//         cout << p->data << " ";
//         p = p->next;
//     }
// }

// int main()
// {
//     cout << "Enter the size of the numbers" << endl;
//     ll n = 0;
//     cin >> n;
//     for (ll i = 0; i < n; i++)
//     {
//         ll random_number;
//         cin >> random_number;
//         create(random_number);
//     }
//     display(head);
//     return 0;
// }

// Question==3(Recursive display)

// #include <bits/stdc++.h>

// using namespace std;
// #define ll long long
// struct node
// {
//     ll data;
//     struct node *next;
// };

// struct node *head = NULL;

// void create(ll arr[], ll size)
// {

//     struct node *last, *t;
//     head = new node;
//     head->data = arr[0];
//     head->next = NULL;
//     last = head;
//     for (ll i = 1; i < size; i++)
//     {
//         t = new node;
//         t->data = arr[i];
//         t->next = NULL;
//         last->next = t;
//         last = t;
//     }
// }
// void display(struct node *p) // Iterative way of approach to display
// {
//     while (p != NULL)
//     {
//         cout << p->data << " ";
//         p = p->next;
//     }
// }

// void recursivelyDisplay(struct node *p) // Recursive way of approach to displaying
// {
//     if (p != NULL)
//     {
//         recursivelyDisplay(p->next);
//         cout << p->data << " ";
//     }
// }

// int main()
// {
//     ll arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

//     create(arr, 9);
//     // display(head);
//     // cout << endl;
//     recursivelyDisplay(head);

//     return 0;
// }

// QUESTION-4(counting and suming of all the elements)

// #include <bits/stdc++.h>

// using namespace std;

// #define ll long long

// struct node
// {
//     ll data;
//     struct node *next;
// };

// struct node *head = NULL;

// void create(ll arr[], ll size)
// {
//     struct node *last, *t;
//     head = new node;
//     head->data = arr[0];
//     head->next = NULL;
//     last = head;
//     for (ll i = 1; i < size; i++)
//     {
//         t = new node;
//         t->data = arr[i];
//         t->next = NULL;
//         last->next = t;
//         last = t;
//     }
// }

// void display(struct node *p)
// {
//     while (p != NULL)
//     {
//         cout << p->data << " ";
//         p = p->next;
//     }
// }
// void count(struct node *p)
// {
//     ll count = 0;
//     while (p != NULL)
//     {
//         count++;
//         p = p->next;
//     }

//     cout << "The number of the node in the linked list is: " << count << endl;
// }

// void sum(struct node *p)
// {
//     ll sum = 0;
//     while (p != NULL)
//     {
//         sum += (p->data);
//         p = p->next;
//     }
//     cout << "sum= " << sum << endl;
// }

// int Rcount(struct node *p)
// {

//     if (p == NULL)
//         return 0;

//     return Rcount(p->next) + 1;
// }

// int main()
// {
//     ll arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
//     create(arr, 9);
//     cout << endl;
//     count(head);
//     cout << endl;
//     // display(head);
//     // cout<<endl;
//     sum(head);
//     cout << endl;
//     cout << "Number of nodes in the linked list are: " << Rcount(head) << endl;
//     return 0;
// }

// // Accumulate(v.begin(),v.end())

// Question-->5(Max element in linked list)

// #include <bits/stdc++.h>

// using namespace std;

// #define ll long long

// struct node
// {
//     ll data;
//     struct node *next;
// };

// struct node *head = NULL;

// void create(ll arr[], ll size)
// {

//     struct node *last, *t;
//     head = new node;
//     head->data = arr[0];
//     head->next = NULL;
//     last = head;
//     for (ll i = 1; i < size; i++)
//     {
//         t = new node;
//         t->data = arr[i];
//         t->next = NULL;
//         last->next = t;
//         last = t;
//     }
// }
// void display(struct node *p)
// {

//     while (p != NULL)
//     {
//         cout << p->data << " ";
//         p = p->next;
//     }
// }

// void maximum(struct node *p)
// {
//     ll m = p->data;

//     while (p != NULL)
//     {
//         if (m < p->data)
//             m = p->data;
//         p = p->next;
//     }
//     cout << "Mzximum = " << m << endl;
// }

// ll Rmaximum(struct node *p, ll m)
// {
//     if (p == NULL)
//         return m;
//     m = max(m, p->data);
//     return Rmaximum(p->next, m);
// }

// Question-->6(Searching a data in a linked list)

// #include <bits/stdc++.h>

// using namespace std;

// #define ll long long

// struct node
// {
//     ll data;
//     struct node *next;
// };

// struct node *head = NULL;

// void create(ll arr[], ll size)
// {
//     struct node *last, *t;
//     head = new node;
//     head->data = arr[0];
//     head->next = NULL;
//     last = head;
//     for (ll i = 1; i < size; i++)
//     {
//         t = new node;
//         t->data = arr[i];
//         t->next = NULL;
//         last->next = t;
//         last = t;
//     }
// }

// void display(struct node *p)
// {

//     while (p)
//     {
//         cout << p->data << " ";
//         p = p->next;
//     }
// }

// bool search(struct node *p, ll key)
// {

//     while (p)
//     {
//         if (p->data == key)
//             return true;

//         p = p->next;
//     }
//     return false;
// }

// int main()
// {
//     ll arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

//     create(arr, 9);
//     display(head);
//     cout << endl;
//     if (search(head, 5))
//         cout << "5 present";
//     return 0;
// }

// Question-->7(improve searching)

// #include <bits/stdc++.h>

// using namespace std;

// #define ll long long

// struct node
// {

//     ll data;
//     struct node *next;
// };

// struct node *head = NULL;

// void create(ll arr[], ll size)
// {

//     struct node *last, *t;
//     head = new node;
//     head->data = arr[0];
//     head->next = NULL;
//     last = head;

//     for (ll i = 1; i < size; i++)
//     {
//         t = new node;
//         t->data = arr[i];
//         t->next = NULL;
//         last->next = t;
//         last = t;
//     }
// }

// void display(struct node *p)
// {

//     while (p != NULL)
//     {
//         cout << p->data << " ";
//         p = p->next;
//     }
// }

// void searching(struct node *p, ll key)
// {
//     struct node *q = NULL;
//     while (p)
//     {
//         if (key == p->data)
//         {
//             q->next = p->next;
//             p->next = head;
//             head = p;
//             return;
//         }
//         q = p;
//         p = p->next;
//     }
// }

// int main()
// {

//     ll arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
//     create(arr, 9);
//     display(head);
//     cout << endl;
//     cout << "Input the number what u want to find in the array: \n";
//     ll key;
//     cin >> key;
//     searching(head, key);
//     cout << "After searching: \n";
//     display(head);
//     return 0;
// }

// Question-->Insertion in a ll

// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long
// struct node
// {
//     ll data;
//     struct node *next;
// };
// struct node *head = NULL;

// void create(ll arr[], ll size)
// {
//     struct node *last, *t;
//     head = new node;
//     head->data = arr[0];
//     head->next = NULL;
//     last = head;
//     for (ll i = 1; i < size; i++)
//     {
//         t = new node;
//         t->data = arr[i];
//         t->next = NULL;
//         last->next = t;
//         last = t;
//     }
// }
// void display(struct node *p)
// {

//     while (p)
//     {
//         cout << p->data << " ";
//         p = p->next;
//     }
//     cout << endl;
// }
// void insert_at_begining(int value) // 0(1)
// {
//     struct node *t;
//     t = new node;
//     t->data = value;
//     t->next = head;
//     head = t;
//     cout << "Insert at beginning: " << endl;
// }

// void insert_at_anypoint(ll val, ll pos) // o(n)
// {
//     struct node *t;
//     t = new node;
//     t->data = val;
//     auto it = head;
//     for (ll i = 0; i < pos - 1; i++)
//         it = it->next;
//     t->next = it->next;
//     it->next = t;
//     cout << "Insert at position: " << pos << endl;
// }

// void insert(ll val, ll pos)
// {
//     auto t = new node;
//     t->data = val;

//     if (pos == 0)
//     {
//         t->next = head;
//         head = t;
//     }
//     else if (pos > 0)
//     {
//         auto p = head;
//         for (ll i = 0; i < pos - 1 && p != NULL; i++)
//             p = p->next;
//         if (p)
//         {
//             t->next = p->next;
//             p->next = t;
//         }
//     }
//     cout << "Insert at any position: " << endl;
// }

// int main()
// {

//     ll arr[] = {1, 2, 3, 4, 5};
//     create(arr, 5);
//     cout << endl;
//     display(head);
//     insert_at_begining(23);
//     display(head);
//     insert_at_anypoint(678, 6);
//     display(head);
//     insert(1234, 5);
//     display(head);
//     return 0;
// }

// Question-->Linked list creation using insertion

// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long

// struct node
// {
//     ll data;
//     struct node *next;
// };

// struct node *head = NULL;

// void create(ll arr[], ll size)
// {
//     struct node *last, *t;
//     head = new node;
//     head->data = arr[0];
//     head->next = NULL;
//     last = head;
//     for (ll i = 1; i < size; i++)
//     {
//         t = new node;
//         t->data = arr[i];
//         t->next = NULL;
//         last->next = t;
//         last = t;
//     }
// }

// void display(struct node *p)
// {
//     cout << "The linked list is: " << endl;
//     while (p)
//     {
//         cout << p->data << " ";
//         p = p->next;
//     }
//     cout << endl;
// }

// ll count(struct node *p)
// {
//     ll c = 0;
//     while (p)
//     {
//         c++;
//         p = p->next;
//     }
//     return c;
// }

// void insert(ll val, ll pos)
// {

//     if (pos < 0 || count(head) < pos)
//     {
//         cout << "Insertion failed\n";
//         return;
//     }
//     auto t = new node;
//     t->data = val;

//     if (pos == 0)
//     {
//         t->next = head;
//         head = t;
//     }
//     else if (pos > 0)
//     {
//         auto p = head;
//         for (ll i = 0; i < pos - 1 && p != NULL; i++)
//             p = p->next;
//         if (p)
//         {
//             t->next = p->next;
//             p->next = t;
//         }
//     }
// }

// int main()
// {

//     ll arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
//     create(arr, 9);
//     display(head);
//     insert(678, 4);
//     cout << "Insert after" << endl;
//     display(head);

//     return 0;
// }

// Question->Inserttion at last position

// #include <bits/stdc++.h>

// using namespace std;
// #define ll long long
// struct node
// {
//     ll data;
//     struct node *next;
// };

// struct node *head;

// void create(ll val)
// {

//     static struct node *last;
//     auto t = new node;
//     t->data = val;
//     t->next = NULL;
//     if (head == NULL)
//     {
//         head = t;
//         last = head;
//     }
//     else
//     {
//         last->next = t;
//         last = t;
//     }
// }

// void display(struct node *p)
// {
//     cout << "The linked list is: " << endl;
//     while (p)
//     {
//         cout << p->data << " ";
//         p = p->next;
//     }
// }

// int main()
// {
//     for (int i = 0; i < 10; i++)
//         create(i + 1);
//     display(head);
//     return 0;
// }
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

void reverse_recursion_ll(struct node *q, struct node *p)
{
    if (p)
    {
        reverse_recursion_ll(p, p->next);
        p->next = q;
    }
    else
    {
        head = q;
    }
}

int main()
{
    ll arr[] = {1, 2, 3, 4, 5, 6, 7};
    create(arr, 7);
    display(head);
    struct node *q = NULL;
    reverse_recursion_ll(q, head);
    display(head);
    return 0;
}