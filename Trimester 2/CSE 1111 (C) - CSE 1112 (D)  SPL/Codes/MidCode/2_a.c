#include<stdio.h>
int main()
{
    int num=5, sum=10, i=4, j=9;
    if (num == 1)
    {
        sum *= 3;
    }
    else if (num == 2)
    {
        
    }
    else if (num == 3)
    {
        sum += --j*2;
        i--;
    }
    else if (num == 4)
    {
        sum = ++i * j--;
    }
    else if (num == 5)
    {
        i += 10;
    }
    else
    {
        sum *= i++ / j--;
        i = i%j;
    }
    
    return 0;
}