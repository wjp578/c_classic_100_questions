#include <stdio.h>
#include <stdlib.h>

//输入某年某月某日，判断这一天是这一年的第几天？

int main()
{
    int day,month,year,sum=0;
    printf("请输入年、月、日，格式为：年,月,日（2015,12,10）\n");
    scanf("%d,%d,%d",&year,&month,&day);  // 格式为：2015,12,10

    int marr[12]={31,28,31,30,31,30,31,31,30,31,30,31};

    int i=0;
    for(;i<month-1;i++)
    {
        sum+=marr[i];
    }

    if((year%4==0&&year%100!=0)||(year%400==0&&year%3200!=0)||year%172800==0)
    {
        sum+=(day+1);
    }

    else
    {
        sum+=day;
    }


    printf("第%d天\n",sum);
    return 0;
}
