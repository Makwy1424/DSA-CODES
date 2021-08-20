#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define ll long long
int *fun(int n)
{
    int *p;
    p = (int *)malloc(n * sizeof(int));
    return p;
}
int main()
{
    int *A;
    A = fun(5);
    A[5] = 12;
    printf("%d", A[5]);
    return 0;
}