#include <stdio.h>
#include <stdlib.h>

//两个乒乓球队进行比赛，各出三人。
//甲队为a,b,c三人，乙队为x,y,z三人。
//已抽签决定比赛名单。有人向队员打听比赛的名单。
//a说他不和x比，c说他不和x,z比，请编程序找出三队赛手的名单。

//int main()
//{
//    int yi=0;
//    char yix='x',yiy='y',yiz='z';
//
//    for(jia_i=0;jia_i<=2;jia_i++)
//    {
//         if((jia_i==0&&yi_i!=0)+//a0不和x0比
//            (jia_i==2&&yi_i!=0)+//c2不和x0比
//            (jia_i==2&&yi_i!=2)==3)//c2不和z2比
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
        a = 'x'+i;//A的位置,I是相对于X的偏移量
        for(j=1;j<3;++j)
        {
            b = 'x'+(i+j)%3;//B相对与A的位置,(I+J)%3为偏移量
            c = 'x'+3-(i+j)%3-i;//C的位置 要 减去两个偏移量
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
