#include <stdio.h>
#include <stdlib.h>

//判断一个数字是否为质数。

#define BOOL int
#define TRUE 1
#define FALSE 0

int main()
{
    int n;
    printf("输入一个大于1的自然数：");
    scanf("%d",&n);
    BOOL flag = TRUE;

    int i;
    for(i=2;i<n;i++) {
        if(n%i==0)
        {
            printf("不是质数\n");
            flag = FALSE;
            break;
        }
    }
    if(flag||n==1||n==2) {
        printf("是质数\n");
    }

    return 0;
}
