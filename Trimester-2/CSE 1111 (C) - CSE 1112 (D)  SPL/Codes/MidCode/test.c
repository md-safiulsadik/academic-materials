#include <stdio.h>

int main()
{
    int n;
    printf("Enter an odd integer (n >= 5): ");
    scanf("%d", &n);

    // Validate input
    if (n < 5 || n % 2 == 0)
    {
        printf("Error: n must be odd and >= 5.\n");
        return 1;
    }

    int mid = n / 2; // Middle row index

    for (int i = 0; i < n; i++)
    {
        if (i == 0 || i == mid || i == n - 1)
        {
            // First, middle, and last rows: all stars
            for (int j = 0; j < n; j++)
            {
                printf("*");
            }
            printf("\n");
        }
        else if (i < mid)
        {
            // Rows above the middle (excluding first): right-aligned star
            // Print (n-2) spaces, then 1 star
            for (int j = 0; j < n - 2; j++)
            {
                printf(" ");
            }
            printf("*\n");
        }
        else
        {
            // Rows below the middle (excluding last): left-aligned star
            printf("*\n");
        }
    }

    return 0;
}
