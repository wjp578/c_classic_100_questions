#include <stdio.h>
#include <stdlib.h>

//��Ŀ����һ���������ֽ������������磺����90,��ӡ��90=2*3*3*5��

int main()
{
    int x, n;
    printf("������һ��������\n");
    scanf("%d",&x);
    printf("%d=",x);
    for(n=2;n<x;n++)
    {
        if(x%n==0)
        {
            printf("%d*",n)��
            x=x/n;
            n=1;
        }
    }
    printf("%d\n",x);

    return 0;
}
