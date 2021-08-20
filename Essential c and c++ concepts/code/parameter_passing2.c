#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define ll long long
void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    swap(&a, &b);
    printf("a = %d, b = %d\n", a, b);

    return 0;
}