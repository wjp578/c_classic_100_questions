#include <stdio.h>
#include <stdlib.h>

//��ȡ7������1��50��������ֵ��ÿ��ȡһ��ֵ�������ӡ����ֵ������ ����

int main()
{
    int i,a,n=1;
    while(n<=7)
    {
        do
        {
            scanf("%d",&a);
        }
        while(a<1||a>50);

        for(i=1;i<=a;i++)
            printf("%d* ",i);

        printf("\n");
        n++;
    }
    return 0;
}
