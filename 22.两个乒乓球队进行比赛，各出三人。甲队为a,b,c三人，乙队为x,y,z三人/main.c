#include <stdio.h>
#include <stdlib.h>

//����ƹ����ӽ��б������������ˡ�
//�׶�Ϊa,b,c���ˣ��Ҷ�Ϊx,y,z���ˡ�
//�ѳ�ǩ���������������������Ա����������������
//a˵������x�ȣ�c˵������x,z�ȣ��������ҳ��������ֵ�������

//int main()
//{
//    int yi=0;
//    char yix='x',yiy='y',yiz='z';
//
//    for(jia_i=0;jia_i<=2;jia_i++)
//    {
//         if((jia_i==0&&yi_i!=0)+//a0����x0��
//            (jia_i==2&&yi_i!=0)+//c2����x0��
//            (jia_i==2&&yi_i!=2)==3)//c2����z2��
//        {
//            printf("%c %c\n",jia+jia_i,yi+yi_i);
//        }
//    }
//
//    return 0;
//}

int main()
{
    char a,b,c;
    int i,j;
    int flag = 0;

    for(i=0;i<3;++i)
    {
        a = 'x'+i;//A��λ��,I�������X��ƫ����
        for(j=1;j<3;++j)
        {
            b = 'x'+(i+j)%3;//B�����A��λ��,(I+J)%3Ϊƫ����
            c = 'x'+3-(i+j)%3-i;//C��λ�� Ҫ ��ȥ����ƫ����
            if(a!='x'&&c!='x'&&c!='z')
            {
                printf("a--%c,b--%c,c--%c\n",a,b,c);
                flag = 1;
                break;
            }
        }
        if(flag == 1) break;
    }

    return 0;
}
