#include <stdio.h>
#include <stdlib.h>


//һ��5λ�����ж����ǲ��ǻ���������12321�ǻ���������λ����λ��ͬ��ʮλ��ǧλ��ͬ��

int main( )
{
    int x;
    int sum = 0;
    printf("������һ������:\n");
    scanf("%d", &x);

    int i;
    for (i = x; i > 0; i /= 10)
        sum = sum * 10 + i % 10;

    if(sum == x)
        printf("%d �ǻ�����\n",x);
    else
        printf("%d ���ǻ�����\n", x);

    return 0;
}
