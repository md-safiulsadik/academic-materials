#include<stdio.h>

int main() {
    
    int i, arr[] = {10, 2, 13, 4, 5, 6, 7, 8, 11, 9};    
    int max, second_max;
    max = second_max = arr[0];

    for (i = 1; i < 10-1; i++) {
        if (arr[i] > max) {
            second_max = max;
            max  = arr[i];
        } else if (arr[i] > second_max && arr[i] != max) {
            second_max = arr[i];
        }
    }

    for (i = 0; i < 10; i++) printf("%d ", arr[i]);
    printf("\n2nd max: %d", second_max);

    return 0;
}