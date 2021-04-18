#include <stdio.h>
#include <stdlib.h>

//有一个已经排好序的数组。现输入一个数，要求按原来的规律将它插入数组中。

#include <stdio.h>
#define N 5
int *sort(int a[],int n);
int main()
{
    int i,j,a[N+1];
    printf("请输入5个数字：\n");
    for(i=0;i<N;i++)
    {
        scanf("%d",&a[i]);
    }
    sort(a,N);
    printf("排序后：\n");
    for(i=0;i<N;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    printf("请输入想要插入的数字：");
    scanf("%d",&j);
    a[N]=j;
    sort(a,N+1);
    printf("插入后排序：\n");
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
