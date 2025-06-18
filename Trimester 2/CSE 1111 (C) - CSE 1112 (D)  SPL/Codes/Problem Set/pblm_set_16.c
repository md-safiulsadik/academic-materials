#include<stdio.h>
#include<stdlib.h>
int main()
{
    int val, index=0;
    int size = 5;
    int *arr = (int *)malloc(sizeof(int) * size);
    while (scanf("%d", &val) == 1) {
        if (size == index) {
            size += 1;
            arr = (int *)realloc(arr, size * sizeof(int));
        }
        arr[index++] = val;
    }

    for (int i = 1; i < index; i += 2) arr[i] = 0;
    for (int i = 0; i < index; i++) printf("%d ", arr[i]);

    return 0;
}