#include<stdio.h>
#include<stdlib.h>

int is_present(int *arr, int size, int val) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == val) return 1;
    }
    return 0;
}

int main()
{
    int n, i;
    scanf("%d", &n);
    int *arr = (int *)malloc(sizeof(int) *n);
    for (i = 0; i < n; i++) scanf("%d", &arr[i]);
    int k = 0;

    for (i = 0; i < n; i++) {
        if (!is_present(arr, i, arr[i])) {
            arr[k++] = arr[i];
        }
    }

    for (i = 0; i < k; i++) printf("%d ", arr[i]);

    free(arr);

    return 0;
}