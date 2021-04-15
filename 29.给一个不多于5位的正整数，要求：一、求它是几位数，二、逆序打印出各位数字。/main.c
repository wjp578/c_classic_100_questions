#include <stdio.h>
#include <stdlib.h>

//给一个不多于5位的正整数，要求：一、求它是几位数，二、逆序打印出各位数字。

int main()
{
    int in;
    printf("请输入正整数(n<5):");
    scanf("%d",&in);

    int tem=in;
    int count=1;

    while(tem/=10)
    {
        count++;
    }
    printf("%d\n",count);

    tem=in;

    while(tem)
    {
        printf("%d",tem%10);
        tem/=10;
    }

    return 0;
}
