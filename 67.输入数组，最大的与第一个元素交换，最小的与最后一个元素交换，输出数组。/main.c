#include <stdio.h>
#include <stdlib.h>

//�������飬�������һ��Ԫ�ؽ�������С�������һ��Ԫ�ؽ�����������顣

void swap(int *arr,int e1,int e2)
{
    int t=arr[e2];
    arr[e2]=arr[e1];
    arr[e1]=t;
}

void swap_max_min(int *arr,int length,void (*s)(int*,int,int)/* �ص�����*/)
{
    int min=0,min_val=*arr,i=0;

    //����Сֵ
    for(i=0;i<length;i++)
    {
        if(*(arr+i)<min_val)
        {
            min_val=*(arr+i);
            min=i;
        }
    }

    //������СԪ��
    s(arr,min,length-1);

    int max=0,max_val=*arr;

    //�����ֵ
    for(i=0;i<length;i++)
    {
        if(*(arr+i)>max_val)
        {
            max_val=*(arr+i);
            max=i;
        }
    }

    //�������Ԫ��
    s(arr,max,0);
}

int main()
{
    int* arr=NULL;

    int a;
//    int t=(int)getchar();
    int count=0;
//    int flag=0;

    while(scanf("%d",&a)!=EOF)
    {
        int* temp=(int*)malloc(sizeof(int)*(1+count));
        count++;
        int i=0;
        for(;i<count-1;i++)
        {
//            if(flag==1)
                temp[i]=arr[i];

//            if(flag==0)
//            {
//                flag=1;
//                *temp=a;
//            }
        }
        temp[i]=a;
        arr=temp;
    }

    int i=0;
    for(;i<count;i++)
    printf("%d ",arr[i]);
    printf("\n");

    swap_max_min(arr,count,swap);

    for(i=0;i<count;i++)
    printf("%d ",arr[i]);
    printf("\n");

    printf("%d\n",count);

    free(arr);
    arr=NULL;
    return 0;
}
