#include <stdio.h>
#include <stdlib.h>

//����ĳ��ĳ��ĳ�գ��ж���һ������һ��ĵڼ��죿

int main()
{
    int day,month,year,sum=0;
    printf("�������ꡢ�¡��գ���ʽΪ����,��,�գ�2015,12,10��\n");
    scanf("%d,%d,%d",&year,&month,&day);  // ��ʽΪ��2015,12,10

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


    printf("��%d��\n",sum);
    return 0;
}
