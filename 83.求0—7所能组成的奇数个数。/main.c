#include <stdio.h>
#include <stdlib.h>

int main()
{
    long sum = 4, s = 4;//sum�ĳ�ʼֵΪ4��ʾ��ֻ��һλ������ɵ���������Ϊ4��
    int j;
    for (j = 2; j <= 8; j++)
    {
        printf("%dλ��Ϊ�����ĸ���%ld\n", j-1, s);
        if (j <= 2)
            s *= 7;
        else
            s *= 8;
        sum += s;
    }
    printf("%dλ��Ϊ�����ĸ���%ld\n", j-1, s);
    printf("�������ܸ���Ϊ��%ld\n", sum);
    // system("pause");
    return 0;
}
