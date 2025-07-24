#include <stdio.h>
int main()
{
    int n, row, col;
    printf("Enter the N: ");
    scanf("%d", &n);

    if (n % 2 == 0 || n < 5)
    {
        printf("Invalid\n");
        return 1;
    }

    int mid = n / 2;

    for (row = 0; row < n; row++)
    {
        if (row == 0 || row == mid || row == n - 1)
        {
            for (col = 0; col < n; col++)
            {
                printf("*");
            }
        }
        else if (row < mid)
        {
            for (col = 0; col < n - 1; col++)
            {
                printf(" ");
            }
            printf("*");
        }
        else printf("*");
        
        printf("\n");
    }

    return 0;
}
