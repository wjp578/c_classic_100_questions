#include <stdio.h>
#include <stdlib.h>

//题目：企业发放的奖金根据利润提成。
//利润(I)低于或等于10万元时，奖金可提10%；
//利润高于10万元，低于20万元时，低于10万元的部分按10%提成，高于10万元的部分，可提成7.5%；
//20万到40万之间时，高于20万元的部分，可提成5%；
//40万到60万之间时高于40万元的部分，可提成3%；
//60万到100万之间时，高于60万元的部分，可提成1.5%；
//高于100万元时，超过100万元的部分按1%提成。
//从键盘输入当月利润I，求应发放奖金总数？

int main()
{
    printf("输入当月利润I(单位：万):");
    double I;
    scanf("%lf",&I);
    I*=10000;

    double salary=0;//奖金
    int thousand=1000;//基本单位

    if(I<=100*thousand)
    {
        salary=I*10/100;
    }

    else if(I<=200*thousand)
    {
        salary = 100*thousand*10/100
               + (I-100*thousand)*7.5/100;
    }

    else if(I<=400*thousand)
    {
        salary = 100*thousand*10/100
               + 100*thousand*7.5/100
               + (I-200*thousand)*5/100;
    }

    else if(I<=600*thousand)
    {
        salary = 100*thousand*10/100
               + 100*thousand*7.5/100
               + 200*thousand*5/100
               + (I-400*thousand)*3/100;
    }

    else if(I<=1000*thousand)
    {
        salary = 100*thousand*10/100
               + 100*thousand*7.5/100
               + 200*thousand*5/100
               + 200*thousand*3/100
               + (I-600*thousand)*1.5/100;
    }

    else
    {
        salary = 100*thousand*10/100
               + 100*thousand*7.5/100
               + 200*thousand*5/100
               + 200*thousand*3/100
               + 400*thousand*1.5/100
               + (I-1000*thousand)*1/100;
    }

//    salary+=I;

    printf("奖金=%.2lf",salary);


    return 0;
}
