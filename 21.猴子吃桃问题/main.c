#include <stdio.h>
#include <stdlib.h>

//题目：猴子吃桃问题：
//猴子第一天摘下若干个桃子，当即吃了一半，还不瘾，又多吃了一个
//第二天早上又将剩下的桃子吃掉一半，又多吃了一个。
//以后每天早上都吃了前一天剩下的一半,多一个。
//到第10天早上想再吃时，见只剩下一个桃子了。
//求第一天共摘了多少。

int main()
{
    int end=1;
//    int sum=0;

    int i=1;
    for(i=1;i<=9;i++)
    {
        end=(end+1)*2;
//        sum+=end;
    }

//    printf("%d %d",end,sum);
    printf("%d ",end);
    return 0;
}
