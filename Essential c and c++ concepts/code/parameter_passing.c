//Swap funtion
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define ll long long
void swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}
int main()
{
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);
    swap(a, b);
    printf("%d %d", a, b); //The value of a and b is not changed.
    return 0;
}