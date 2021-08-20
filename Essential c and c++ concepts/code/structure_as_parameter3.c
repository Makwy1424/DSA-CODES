#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define ll long long
struct rectangle
{
    int length;
    int breadth;
};
void changelength(struct rectangle *r, int d)
{
    r->length = d; //This is the line change the length of the structure.
}
int main()
{
    struct rectangle r;
    scanf("%d %d", &r.length, &r.breadth);
    printf("\n Put the new length\n");
    int n;
    scanf("%d", &n);
    changelength(&r, n); //call by adress w.r.t structure
    printf("%d %d", r.length, r.breadth);
    return 0;
}