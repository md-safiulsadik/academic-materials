#include <stdio.h>

int main() {
    int arr[] = { 1, 4, 5, 6, 7, 8, 83, 123, 231, -1 };  // sentinel -1
    int *ptr = arr;
    int length = 0;

    while (*ptr != '\0') {
        length++;
        ptr++;
    }

    printf("Length = %d\n", length);
    return 0;
}
