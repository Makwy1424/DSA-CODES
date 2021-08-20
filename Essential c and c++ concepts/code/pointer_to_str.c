#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define ll long long
struct rectangle
{
    int length;
    int breadth;
};
int main()
{

    struct rectangle r = {10, 4};
    struct rectangle *p = &r;
    r.length = 15;
    (*p).length = 20;
    p->length = 30;

    printf("%d\n", r.length);
    return 0;
}