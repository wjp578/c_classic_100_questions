#include <stdio.h>
#include <stdlib.h>

//题目：求s=a+aa+aaa+aaaa+aa...a的值，其中a是一个数字。
//例如2+22+222+2222+22222(此时共有5个数相加)，几个数相加有键盘控制。

int main()
{
    int base,count;
    printf("请输入base(0~9)和count(1~9):");//整形，超过9时数据会丢失
    scanf("%d%d",&base,&count);

    int i=0;
    int sum=0;
    for(i=0;i<count;i++)
    {
        sum+=base;
        printf("%d",base);
        base=10*base+base%10;
        if(i<count-1)   printf("+");
    }

    printf("=%d\n",sum);
    return 0;
}
