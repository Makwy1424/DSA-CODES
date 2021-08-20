#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define ll long long
int main()
{
    int n = 030;
    printf("%d\n", n); //octal ban jata hai
                       // agar hum 0x use karenge to ye hexadecimal samjhe ga and only 0 use karenge to octal samjhega and
                       //0b is written for binary numbers.
    int a;
    scanf("%d", &a);
    int *p;
    p = &a;
    printf("%d", a);
    printf("%d", *p);
    printf("%d", p);

    return 0;
}