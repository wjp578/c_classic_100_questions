#include <stdio.h>
#include <stdlib.h>

//��5��������һ���ʵ�����˶����ꣿ
//��˵�ȵ�4���˴�2�ꡣ
//�ʵ�4������������˵�ȵ�3���˴�2�ꡣ
//�ʵ������ˣ���˵�ȵ�2�˴����ꡣ
//�ʵ�2���ˣ�˵�ȵ�һ���˴����ꡣ
//����ʵ�һ���ˣ���˵��10�ꡣ
//���ʵ�����˶��

int age(int n)
{
    if(n == 1)
        return 10;
    else
        return age(n - 1) + 2;
}

int main(void)
{
    int n;
    n = age(5);
    printf("%d\n",n);
    return 0;
}
