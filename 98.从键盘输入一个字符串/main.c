#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

//��Ŀ���Ӽ�������һ���ַ�������Сд��ĸȫ��ת���ɴ�д��ĸ��Ȼ�������һ�������ļ�"test"�б��档 ������ַ����ԣ�������

int main()
{
    FILE*fp=NULL;
    char str[50];
    int i,len;
    printf("����һ���ַ�����\n");
    gets(str);
    len=strlen(str);
    for(i=0;i<len;i++)
    {
        if(str[i]<='z'&&str[i]>='a')
            str[i]-=32;
//            str[i]=toupper(str[i]);
    }
    if((fp=fopen("test.txt","w"))==NULL)
    {
        printf("error: cannot open file!\n");
        exit(0);
    }
    fprintf(fp,"%s",str);
    fclose(fp);

    system("pause");
    return 0;
}
