#include <stdio.h>
#include <stdlib.h>

struct student
{
    int x;
    char c;
}a;

struct student* f(struct student *b)
{
    b ->x = 20;
    b->c ='y';
    return b;
}

int main()
{
    a.x=3;
    a.c='a';
    f(&a);
    printf("%d,%c",a.x,a.c);

    return 0;
}
