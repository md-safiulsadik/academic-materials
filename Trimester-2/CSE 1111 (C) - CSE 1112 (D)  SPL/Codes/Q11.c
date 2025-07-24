#include <stdio.h>

int BinaryToDecimal(int n)
{
    int temp = n;
    int dec_value = 0;
    int base = 1;

    while (temp)
    { // 1011 = 1 * (2^3) + 0 * (2^2) + 1 * (2^1) + 1 * (2^0)
        int last_digit = temp % 10;
        dec_value += last_digit * base;
        base *= 2;
        temp /= 10;
    }
    return dec_value;
}

int main()
{
    int n;
    printf("Enter the binary value: ");
    scanf("%d", &n);
    int dec = BinaryToDecimal(n);
    printf("Dec: %d\n", dec);

    return 0;
}