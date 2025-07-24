#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);

    if (a % 2 == 0) {

        if (a % 22 == 0) {
            printf("Even and Divisible by 22\n");
        }
        else {
            printf("Even but NOT divisible by 22\n");
        }
    }
    else {
        if (a % 19 == 0) {
            printf("Odd and divisible by 19\n");
        }
        else {
            printf("Odd but not divisible by 19\n");
        }
    }    
    
    return 0;
}
