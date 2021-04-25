#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define str_length 20

//static int len=20;
int len=20;

char* my_strcat(char *str1, char *str2)
{
    char *p = str1;
    char *q = str2;
    while(*p != '\0')
        p++;
    while(*q != '\0')
    {
        *p = *q;
        p++;
        q++;
    }
    *p = '\0';
    return str1;
}

int main(void)
{
//    static int len=20;
//    char str1[len],str2[len];
    char str1[str_length],str2[str_length];
    printf("请输入第一个字符串：\n");
    gets(str1);
    printf("请输入第二个字符串：\n");
    gets(str2);
    strcmp(str1,my_strcat(str1,str2));
    puts(str1);
    return 0;
}
