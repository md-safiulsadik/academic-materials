/*
  WAP that takes inputs of m x n sized array, and find the mix value in the array, print the value and the index number?  
*/

#include<stdio.h>

void find_max_value(int n, int m, int arr[n][m], int *max_i, int *max_j, int *max_val) {
    int i, j;
    *max_val = arr[0][0];
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            if (arr[i][j] > *max_val) {
                *max_val = arr[i][j];
                *max_i = i;
                *max_j = j;
            }
        }
    }
} 



int main()
{
    int n, m, i, j;
    printf("How many rows? ");
    scanf("%d", &n);
    printf("How many collams? ");
    scanf("%d", &m);

    int arr[n][m];

    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            scanf("%d", &arr[i][j]);
        }
    } 

    int max_i, max_j, max_val;

    find_max_value(n, m, arr, &max_i, &max_j, &max_val);

    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            printf("%d\t", arr[i][j]);
        } printf("\n");
    } 

    printf("Max value: %d\nIndex: [%d][%d]", max_val, max_i, max_j);

    return 0;
}