#include <stdio.h>
#include <stdlib.h>

void Print(int n)
{
    if(n){
        printf("hello world\n");
        Print(n-1);
    }
}

int main()
{
    int n;
    printf("��ӡ���ٴ�:");
    scanf("%d",&n);
    Print(n);
    return 0;
}
