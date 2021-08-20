#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define ll long long
int add(int m, int n)
{
    return m + n;
}
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int y = add(a, b);
    printf("%d", y);
    return 0;
}