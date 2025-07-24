#include<stdio.h>
#include<math.h>

int is_prime(int x) {
    if (x == 1) return 0;
    if (x == 2) return 1;

    int flag = 0;

    for (int i = 2; i <= sqrt(x); i++) {
        if (x % i == 0) return 0;
        else flag = 1;
    }
    if (flag) return 1;
}

int is_power_of_2(int x) {
    if (x <= 0) return 0;
    if (x == 1) return 1;

    return (x % 2 == 0) && is_power_of_2(x / 2);
}

int is_mersenne(int x) {
    if (is_prime(x) && is_power_of_2(x+1))
        return 1;
    else return 0;
}

int main()
{
    int x;
    if (scanf("%d", &x) != 1) {
        printf("Invalid input\n");
        return -1;
    }

    if (is_mersenne(x)) printf("Yes\n");
    else printf("No\n");

    return 0;
}