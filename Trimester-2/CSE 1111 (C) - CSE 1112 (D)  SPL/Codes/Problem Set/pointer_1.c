#include<stdio.h>
int main()
{
    int num1=3, num2=5;
    int *pNum1 = NULL;
    int *pNum2 = NULL;

    pNum1 = &num1;
    pNum2 = &num2;

    printf("%d\n", *pNum1 + *pNum2);


    return 0;
}
