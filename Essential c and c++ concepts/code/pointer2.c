#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define ll long long
int main()
{
    int *p;
    p = (int *)malloc(5 * sizeof(int)); /// Heap allocation size
    p[0] = 90;
    printf("%d", p[0]);
    return 0;
}