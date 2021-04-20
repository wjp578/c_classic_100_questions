#include <stdio.h>
#include <stdlib.h>

//Çó×Ö·û´®³¤¶È
int length(char *s)
{
    int i=0;
    while(*s!='\0')
    {
        i++;
        s++;
    }
    return i;
}

int main()
{
    int len;
    char str[20];
    printf("ÇëÊäÈë×Ö·û´®:\n");
    scanf("%s",str);
    len=length(str);
    printf("×Ö·û´®ÓÐ %d ¸ö×Ö·û¡£",len);
    return 0;
}
