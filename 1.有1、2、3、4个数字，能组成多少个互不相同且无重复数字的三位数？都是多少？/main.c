#include <stdio.h>
#include <stdlib.h>

//题目：有1、2、3、4个数字，能组成多少个互不相同且无重复数字的三位数？都是多少？

int main()
{
    int a,b,c,i=0;
    for(a=1;a<5;a++)
    {
        for(b=1;b<5;b++)
        {
            for(c=1;c<5;c++)
            {
                if(a!=b&&b!=c&&a!=c)
                {
                    printf("%d ",a*100+b*10+c);
                    i++;
                }
            }
        }
    }

    printf("\n%d",i);

    return 0;
}
