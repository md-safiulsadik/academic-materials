#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    if (n%2 == 0) return 1;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (i == 1 || i == n || i == j || (i+j == n+1)) printf("*");
            else printf(" ");
        } printf("\n");
    }

    return 0;
}