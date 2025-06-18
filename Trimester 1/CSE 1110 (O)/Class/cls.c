#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    if (n % 2 != 0)
    {
        if (n % 13 == 0)
        {
            printf("Odd and Divisible by 13");
        }
        else
        {
            printf("Odd but NOT divisible by 13");
        }
    }
    else
    {
        if (n % 13 == 0)
        {
            printf("Not Odd but Divisible by 13\n");
        }
        else
        {
            printf("Not odd and not divisible by 13\n");
        }
    }

    return 0;
}
