#include <stdio.h>
#include <stdlib.h>

//��n����Χ��һȦ��˳���źš��ӵ�һ���˿�ʼ��������1��3��������������3�����˳�Ȧ�ӣ���������µ���ԭ���ڼ��ŵ���λ��

int main()
{
    int num;
	printf("����������");
	scanf("%d",&num);
	int p_num=num;

	int *circle=(int*)calloc(21,4);
	int *circle_cur=circle;
	int arr[3]={1,2,3};
	int *arr_cur=arr;

//	printf("%d",sizeof(circle));

    //ֻ��һ�����ʱ�˳�ѭ��
    while(num>1)
    {
        //�жϵ�ǰԪ�أ�=3
        //==3--�������˳�Ȧ--�鿴��һ��Ԫ��
        //��=3--������Ȧ��--��Ϸ����
        if(*circle_cur==3)
            circle_cur++;

        else
        {
            //��arr��ָ��3�����ƺ�����ָ����Ԫ�أ��Ҹ���ң�������3���˳���Ϸ
            if(*arr_cur==3)
            {
                *circle_cur=*arr_cur;
                arr_cur=arr;
                circle_cur++;
                num--;
            }

            //��3����������ֵ�������ƣ���һ����ң�
            else
            {
                *circle_cur=*arr_cur;
                circle_cur++;
                arr_cur++;
            }
        }

        //���circle�Ƿ�ָ��ĩβλ��
        if(circle_cur==circle+p_num)
            circle_cur=circle;
    }

    //��������
    //��ӡ�鿴ÿ�����
    //��ӡ�������±�
    int i=0,survive_player=-1;
    for(i=0;i<p_num;i++)
        {
//            printf("%d ",*(circle+i));

            if(survive_player==-1)
            {
                if(*(circle+i)!=3)
                    survive_player=i+1;
            }
        }

    printf("\n�������Ϊ %d�� ���\n",survive_player);



	free(circle);
	circle=NULL;

	return 0;
}
