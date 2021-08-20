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
    struct rectangle *p;
    p = (struct rectangle *)malloc(sizeof(struct rectangle));
    p->length = 10;
    p->breadth = 243;
    printf("%d\n", p->length);
    printf("%d", p->breadth);
    return 0;
}