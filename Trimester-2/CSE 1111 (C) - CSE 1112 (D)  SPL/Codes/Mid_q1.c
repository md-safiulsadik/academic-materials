#include <stdio.h>

int main() {
    int n = 5;

    for (int i = 1; i <= n; i++) {
            int x = 2;
            int y = i;
        for (int j = 1; j <= (n+i)-1; j++) {
            if(j <= n-i) printf("_");
            else if (j == n) printf("1");
            else if (j > n) printf("%d", x++);
            else printf("%d", y--);
        }
        printf("\n");
    }

    return 0;
}
