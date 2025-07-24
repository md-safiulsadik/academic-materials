#include<stdio.h>

int main()
{
    int n, row, col;
    printf("Enter N: ");
    scanf("%d", &n);
    
    for (row = 0; row < n; row++)
    {
        for (col = 0; col < 2*(n - row - 1); col++)
        {
            printf(" ");
        }
        int i;
        for (i = 0; i <= row; i++)
        {
            printf("%c ", 'A'+i);
        }
        
        for (int j = 0; j < row; j++)
        {
            printf("%c ", 'A'+(i+j));
        }
        printf("\n");
    }
    
    return 0;
}