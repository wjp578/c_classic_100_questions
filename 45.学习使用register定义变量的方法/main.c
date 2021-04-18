#include <stdio.h>

int main()
{
    register int i;//频繁调用
    int tmp=0;
    for(i=1;i<=100;i++)
        tmp+=i;
    printf("总和为 %d\n",tmp);
    return 0;
}
