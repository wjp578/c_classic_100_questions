#include <stdio.h>
#include <stdlib.h>

//��Ŀ����1��2��3��4�����֣�����ɶ��ٸ�������ͬ�����ظ����ֵ���λ�������Ƕ��٣�

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
