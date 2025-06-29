#include<stdio.h>
int main()
{
    int num1, num2;
    int *pNum1=NULL, *pNum2=NULL;

    printf("Enter the 1st number: ");
    scanf("%d", &num1);
    printf("Enter the 1st number: ");
    scanf("%d", &num2);

    pNum1 = &num1;
    pNum2 = &num2;

   (*pNum1 < *pNum2) ? printf("Number 2 (%d) is Bigger!\n", *pNum2) : printf("Number 1 (%d) is Bigger!\n", *pNum1);

    return 0;
}
