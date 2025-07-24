#include<stdio.h>
int main()
{
    int n, row, col, p;
    printf("Enter N: ");
    scanf("%d", &n);

    for (row = 1; row < 2*n; row++)
    {
        for (col = 1; col < 2*n; col++)
        {
            if (row == col && row <= n || row < n-1) printf("*");
            else printf("%d", n);
        }
        printf("\n");
    }

    return 0; 
}