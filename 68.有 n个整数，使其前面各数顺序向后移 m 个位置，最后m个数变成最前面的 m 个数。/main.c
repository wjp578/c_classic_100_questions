#include <stdio.h>
#include <stdlib.h>

//�� n��������ʹ��ǰ�����˳������� m ��λ�ã����m���������ǰ��� m ������

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int arr[20];
    int i,n,offset;
    //���������С����������
    printf("Total numbers?\n");
    scanf("%d",&n);
    printf("Input %d numbers.\n",n);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    //�������ƫ����
    printf("Set your offset.\n");
    scanf("%d",&offset);
    printf("Offset is %d.\n",offset);
    //��ӡ����ǰ����
    print_arr(arr,n);
    //�������鲢��ӡ
    move(arr,n,offset);
    print_arr(arr,n);
}

//��ӡ����
void print_arr(int array[],int n)
{
    int i;
    for(i=0;i<n;++i)
        printf("%4d",array[i]);
    printf("\n");
}
//��������
void move(int array[],int n,int offset)
{
    int *p,*arr_end;
    arr_end=array+n;      //�������һ��Ԫ�ص���һ��λ��
    int last;

    //����ֱ��ƫ����Ϊ0
    while(offset)
    {
        last=*(arr_end-1);
        for(p=arr_end-1;p!=array;--p)   //���ҹ���һλ
            *p=*(p-1);
        *array=last;
        --offset;
    }
}
