#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define ll long long
void fun(int a[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}
int main()
{
    int a[5] = {0, 1, 2, 3, 4};
    fun(a, 5);
    return 0;
}
//modify function
/*
void fun(int a[], int n)
{
    a[0]=23;  //It is updated in main array.
    
}
int main()
{
    int a[5] = {0, 1, 2, 3, 4};
    fun(a, 5);
    return 0;
}
*/