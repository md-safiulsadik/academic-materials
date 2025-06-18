#include <stdio.h>

long double factorial(int num) {
    long double result = 1.0;
    while (num > 1) {
        result *= num;
        num--;
    }
    return result;
}

int main() {
    int num;
    printf("Enter a number to get its factorial: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Error: Factorial is not defined for negative numbers.\n");
        return 1;
    }

    long double fact = factorial(num);
    printf("%d! = %.4Lf\n", num, fact);
    return 0;
}