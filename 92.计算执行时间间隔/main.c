#include <stdio.h>
#include <time.h>

int main()
{
    time_t start,end;
    int i;
    start=time(NULL);
    for(i=0;i<12413;i++)
    {
        printf("\n");  // ��������time_t�ͱ���֮���ʱ����
    }
    end=time(NULL);

    // ���ִ��ʱ��
    printf("ʱ����Ϊ %6.3f\n",difftime(end,start));

    return 0;
}
