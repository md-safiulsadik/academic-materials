#include <stdio.h>
void main()
{
    int x, y;
    scanf("%d%d", &x, &y);
    if ((x == y) || (x + y > 10))
    {
        printf("Alpha\n");
        if (x % 2 == 0 && y % 2 == 0)
            printf("Both Even\n");
        else
            printf("Not Both Even\n");
    }
    else if (x > y)
    {
        printf("Beta\n");
        if (x - y > 5)
            printf("Difference > 5\n");
    }
    else
    {
        printf("Gamma\n");
        if (y % x == 0)
            printf("Divisible\n");
        else
            printf("Not Divisible\n");
    }
    if (x != 0 && y != 0)
        printf("End\n");
}