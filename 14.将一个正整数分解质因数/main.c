#include <stdio.h>
#include <stdlib.h>

//题目：将一个正整数分解质因数。例如：输入90,打印出90=2*3*3*5。

int main()
{
    while(1)
    {
        int x, n;
        scanf("%d",&x);
        printf("%d=",x);
        for(n=2;n<x;n++)
        {
            if(x%n==0)
            {
                printf("%d*",n);
                x/=n;
                n=1;
            }
        }
        printf("%d\n",x);
    }

    return 0;
}
