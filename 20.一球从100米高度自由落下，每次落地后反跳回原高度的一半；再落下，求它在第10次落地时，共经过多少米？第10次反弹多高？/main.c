#include <stdio.h>
#include <stdlib.h>

//һ���100�׸߶��������£�ÿ����غ�����ԭ�߶ȵ�һ�룻�����£������ڵ�10�����ʱ�������������ף���10�η�����ߣ�

#define COUNT 10//�������

int main()
{
    double height=100;
    double sum_displacement=height;

    int drop;
    for(drop=1;drop<COUNT;drop++)
    {
//        sum_displacement+=height;
        height/=2;
        sum_displacement+=2*height;

//        printf("%d�η���������%.10lf��  ��%d�η���%.10lf��\n",drop+1,sum_displacement,drop+1,height);

    }

    printf("%d�η���������%.7lf��  ��%d�η���%.7lf��\n",COUNT,sum_displacement,COUNT,height);
    return 0;
}
