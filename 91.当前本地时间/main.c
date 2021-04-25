#include <stdio.h>
#include <time.h>

int main ()
{
    time_t rawtime;
    struct tm * timeinfo;

    time ( &rawtime );
    timeinfo = localtime ( &rawtime );
    printf ( "当前本地时间为: %s\n", asctime (timeinfo) );
    printf ( "当前本地时间为（格林威治时间）: %s\n", asctime(gmtime (&rawtime)) );
    printf ( "ctime测试：%s\n", ctime(&rawtime) );
    printf ( "%u",(unsigned int)rawtime );

    return 0;
}
