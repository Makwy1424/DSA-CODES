#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define ll long long
struct rectangle
{
    int length;
    int breadth;
};
int area(struct rectangle r)
{
    //Separate value is created
    return r.length * r.breadth;
}
int main()
{
    struct rectangle r = {10, 34};
    printf("%d", area(r));
    return 0;
}