#include <stdio.h>
#include <stdlib.h>

//��һ���Ѿ��ź�������顣������һ������Ҫ��ԭ���Ĺ��ɽ������������С�

#include <stdio.h>
#define N 5
int *sort(int a[],int n);
int main()
{
    int i,j,a[N+1];
    printf("������5�����֣�\n");
    for(i=0;i<N;i++)
    {
        scanf("%d",&a[i]);
    }
    sort(a,N);
    printf("�����\n");
    for(i=0;i<N;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    printf("��������Ҫ��������֣�");
    scanf("%d",&j);
    a[N]=j;
    sort(a,N+1);
    printf("���������\n");
    for(i=0;i<N+1;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    return 0;
}

int* sort(int a[],int n)
{
    int i,j,min,t;
    for(i=0;i<n-1;i++)
    {
        min=i;
        for(j=i+1;j<n;j++)
        {
            if(a[min]>a[j])
            {
                min=j;
            }
        }
        if(min!=i)
        {
            t=a[min];
            a[min]=a[i];
            a[i]=t;
        }
    }
    return a;
}
