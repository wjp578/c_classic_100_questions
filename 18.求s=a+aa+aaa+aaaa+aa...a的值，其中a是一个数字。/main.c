#include <stdio.h>
#include <stdlib.h>

//��Ŀ����s=a+aa+aaa+aaaa+aa...a��ֵ������a��һ�����֡�
//����2+22+222+2222+22222(��ʱ����5�������)������������м��̿��ơ�

int main()
{
    int base,count;
    printf("������base(0~9)��count(1~9):");//���Σ�����9ʱ���ݻᶪʧ
    scanf("%d%d",&base,&count);

    int i=0;
    int sum=0;
    for(i=0;i<count;i++)
    {
        sum+=base;
        printf("%d",base);
        base=10*base+base%10;
        if(i<count-1)   printf("+");
    }

    printf("=%d\n",sum);
    return 0;
}
