#include <stdio.h>
#include <time.h>

int main ()
{
    time_t rawtime;
    struct tm * timeinfo;

    time ( &rawtime );
    timeinfo = localtime ( &rawtime );
    printf ( "��ǰ����ʱ��Ϊ: %s\n", asctime (timeinfo) );
    printf ( "��ǰ����ʱ��Ϊ����������ʱ�䣩: %s\n", asctime(gmtime (&rawtime)) );
    printf ( "ctime���ԣ�%s\n", ctime(&rawtime) );
    printf ( "%u",(unsigned int)rawtime );

    return 0;
}
