#include <stdio.h>
#include <stdlib.h>

//�ж�һ�������Ƿ�Ϊ������

#define BOOL int
#define TRUE 1
#define FALSE 0

int main()
{
    int n;
    printf("����һ������1����Ȼ����");
    scanf("%d",&n);
    BOOL flag = TRUE;

    int i;
    for(i=2;i<n;i++) {
        if(n%i==0)
        {
            printf("��������\n");
            flag = FALSE;
            break;
        }
    }
    if(flag||n==1||n==2) {
        printf("������\n");
    }

    return 0;
}
