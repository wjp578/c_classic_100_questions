#include <stdio.h>

int a,b,c;//ȫ��
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
    printf("c ��ֵΪ %d\n",c);
    return 0;
}
