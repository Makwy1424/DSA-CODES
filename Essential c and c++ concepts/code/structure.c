#include <stdio.h>
struct rectangle
{
    int length;
    int breadth;
};
struct complex
{
    int real;
    int img;
};
struct student
{
    int roll;
    char name[34];
    char dept[78];
    char adress[78];
} int main()
{
    struct rectangle r;
    //DEclaration
    struct rectangle r = {10, 5}; //Declaration with initialization
    r.length = 15;
    r.breadth = 10;
    printf("%d %d", r.length, r.breadth);
    return 0;
}
//struct rectangle lot[20]; //It is a structure array.
//We can asess the members by indexing lot[0].length and lot[0].breadth
