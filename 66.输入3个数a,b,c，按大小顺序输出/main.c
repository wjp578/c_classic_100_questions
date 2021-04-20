#include <stdio.h>
#include <stdlib.h>

//利用指针方法。

void swap(int *elem1,int *elem2)
{
    int temp=*elem1;
    *elem1=*elem2;
    *elem2=temp;
}

int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);

    if(a<b) swap(&a,&b);
    if(a<c) swap(&a,&c);
    if(b<c) swap(&c,&b);

    printf("%d %d %d\n",a,b,c);

    return 0;
}
