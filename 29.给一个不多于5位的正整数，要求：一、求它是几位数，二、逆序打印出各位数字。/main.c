#include <stdio.h>
#include <stdlib.h>

//��һ��������5λ����������Ҫ��һ�������Ǽ�λ�������������ӡ����λ���֡�

int main()
{
    int in;
    printf("������������(n<5):");
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
