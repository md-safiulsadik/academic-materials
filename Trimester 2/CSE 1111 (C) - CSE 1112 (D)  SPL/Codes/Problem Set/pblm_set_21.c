#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i, j, n, m, k;

    scanf("%d", &n);

    int *arr1 = (int *)malloc(n * sizeof(int));
    for (i = 0; i < n; i++) scanf("%d", &arr1[i]);

    scanf("%d", &m);    

    int *arr2 = (int *)malloc(m * sizeof(int));
    for (i = 0; i < m; i++) scanf("%d", &arr2[i]);

    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            if (arr1[i] == arr2[j]) {
                k = i;
                while (k < n-1)
                {
                    arr1[k] = arr1[k+1];
                    k++;
                }
                n--;
                i--;
                break;
            }
        }
    }

    printf("Final array: ");
    for (i = 0; i < n; i++) printf("%d ", arr1[i]);

    free(arr1);
    free(arr2);
    return 0;
}