#include <stdio.h>
#include <stdlib.h>

//��Ŀ����ҵ���ŵĽ������������ɡ�
//����(I)���ڻ����10��Ԫʱ���������10%��
//�������10��Ԫ������20��Ԫʱ������10��Ԫ�Ĳ��ְ�10%��ɣ�����10��Ԫ�Ĳ��֣������7.5%��
//20��40��֮��ʱ������20��Ԫ�Ĳ��֣������5%��
//40��60��֮��ʱ����40��Ԫ�Ĳ��֣������3%��
//60��100��֮��ʱ������60��Ԫ�Ĳ��֣������1.5%��
//����100��Ԫʱ������100��Ԫ�Ĳ��ְ�1%��ɡ�
//�Ӽ������뵱������I����Ӧ���Ž���������

int main()
{
    printf("���뵱������I(��λ����):");
    double I;
    scanf("%lf",&I);
    I*=10000;

    double salary=0;//����
    int thousand=1000;//������λ

    if(I<=100*thousand)
    {
        salary=I*10/100;
    }

    else if(I<=200*thousand)
    {
        salary = 100*thousand*10/100
               + (I-100*thousand)*7.5/100;
    }

    else if(I<=400*thousand)
    {
        salary = 100*thousand*10/100
               + 100*thousand*7.5/100
               + (I-200*thousand)*5/100;
    }

    else if(I<=600*thousand)
    {
        salary = 100*thousand*10/100
               + 100*thousand*7.5/100
               + 200*thousand*5/100
               + (I-400*thousand)*3/100;
    }

    else if(I<=1000*thousand)
    {
        salary = 100*thousand*10/100
               + 100*thousand*7.5/100
               + 200*thousand*5/100
               + 200*thousand*3/100
               + (I-600*thousand)*1.5/100;
    }

    else
    {
        salary = 100*thousand*10/100
               + 100*thousand*7.5/100
               + 200*thousand*5/100
               + 200*thousand*3/100
               + 400*thousand*1.5/100
               + (I-1000*thousand)*1/100;
    }

//    salary+=I;

    printf("����=%.2lf",salary);


    return 0;
}
