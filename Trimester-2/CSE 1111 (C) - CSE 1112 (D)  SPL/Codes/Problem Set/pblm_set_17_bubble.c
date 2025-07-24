#include<stdio.h>
#include<stdlib.h>

void bubble_short(int *arr, int size){
    int temp, shifted;
    for (int i = 0; i < size; i++) {
        shifted = 0;
        for (int j = 0; j < size - (i + 1); j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                shifted = 1;
            }
        }
        if (!shifted) break;
    }
    for (int i = 0; i < size; i++) printf("%d ", arr[i]);
}

int main()
{
    int val, index=0;
    int size = 10;
    int *arr = (int *)malloc(sizeof(int) * size);
    while (scanf("%d", &val) == 1) {
        if (size == index) {
            size *= 2;
            arr = (int *)realloc(arr, size * sizeof(int));
        }
        arr[index++] = val;
    }
    bubble_short(arr, index);
    printf("\n");
    free(arr);
    return 0;
}