#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define ll long long
struct test
{
    int a[5];
    int n;
};
void func(struct test b)
{
    b.a[0] = 9;
}
int main()
{
    struct test r = {{1, 2, 3, 4, 5}, 42};
    func(r);
    printf("%d", r.a[0]);
    return 0;
}