#include <stdio.h>
int main() {
        int arr[3][3];
        int max = -9999999;

        for (int i = 0; i < 3; i++) {
                for (int j = 0; j < 3; j++) {
                        scanf("%d", &arr[i][j]);
                }
        }

        for (int i = 0; i < 3; i++) {
                for (int j = 0; j < 3; j++) {
                        if (arr[i][j] > max) max = arr[i][j];
                }
        }
        printf("Max: %d\n", max);
        return 0;
}


