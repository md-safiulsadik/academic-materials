#include <stdio.h>

int main()
{
    int n = 7, row, col;

    for (row = 0; row < n;row++)
    {
        for (col = 0; col < n; col++)
        {
            if (row == col || row+col == n-1)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    

    return 0;
}