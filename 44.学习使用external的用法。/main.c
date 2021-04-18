#include <stdio.h>

int a,b,c;//全局
void add()
{
    int a;
    a=3;
    c=a+b;
}
int main()
{
    a=b=4;
    add();
    printf("c 的值为 %d\n",c);
    return 0;
}
