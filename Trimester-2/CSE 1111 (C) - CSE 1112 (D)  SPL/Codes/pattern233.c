#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        // Print leading spaces
        for (int s = 0; s < (n - i) * 2; s++) {
            printf(" ");
        }

        // Print numbers
        int num = 2 * i;
        for (int j = 1; j < i; j++) {
            printf("%d ", num);
            num += 2;
        }

        for (int j = i; j > 0; j--) {
            printf("%d", num);
            if (j > 1) {
                printf(" ");
            }
            num -= 2;
        }

        printf("\n");
    }

    return 0;
}


