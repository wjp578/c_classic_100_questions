#include <stdio.h>
#include <stdlib.h>

struct programming
{
    float constant;
    char *pointer;
};

int main()
{
    struct programming variable;
    char string[] = "i����򷨹��鷨i҅ȫ��";

    variable.constant = 1.23;
    variable.pointer = string;

    printf("%f\n", variable.constant);
    printf("%s\n", variable.pointer);

    return 0;
}
