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
    char string[] = "i好书打法工书法i覅全国";

    variable.constant = 1.23;
    variable.pointer = string;

    printf("%f\n", variable.constant);
    printf("%s\n", variable.pointer);

    return 0;
}
