#include <stdio.h>
#include <stdlib.h>

//输入一行字符，分别统计出其中英文字母、空格、数字和其它字符的个数

int main()
{
    char ch[256]={0};
    int count[256]={0};
//    char in[1000]={0};
//    char* cur=in;
    int lenth=0;
    int flag=0;

    char ch1;

    while((ch1=getchar()) != '\n')
    {
//        char tep=*cur;
        char tep=ch1;
        int i=0;

        if(flag==0)
        {
//            ch[0]=*cur;
//            cur++;
            ch[0]=tep;
            count[0]++;
            lenth++;
            flag=1;
        }

        else
        {
            for(;i<lenth;i++)
            {
                if(tep==ch[i])
                {
                    count[i]++;
                    break;
                }
            }

            if(i>=lenth)
            {
                ch[lenth]=tep;
                count[lenth]++;
                lenth++;
            }

//            cur++;
        }
    }

    int j=0,sum=0;
    for(;j<lenth;j++)
    {
        printf("字符：%c   个数：%d\n",ch[j],count[j]);
        sum+=count[j];
    }

    printf("conut=%d\n",lenth);//出现的不同字符个数
    printf("lenth=%d\n",sum);//输入字符长度

    return 0;
}
