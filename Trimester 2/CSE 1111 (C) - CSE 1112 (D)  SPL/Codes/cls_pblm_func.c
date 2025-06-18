#include<stdio.h>

int add(int a, int b)
{
    int c;
    c=a+b;
    return c;
}
int main()
{
    int a,b,c,res, x;
    scanf("%d %d %d",&a,&b,&c);
    x = add(a, b);
    res = add(x, c);
    printf("Result is: %d\n",res);
    return 0;
}