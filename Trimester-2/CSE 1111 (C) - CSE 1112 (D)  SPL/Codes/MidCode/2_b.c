#include <stdio.h>

int main()
{
    int p = 1;
    int x = 490;

    for (int i = 0; i <= p; i++)
    {
        printf("%d %d %d\n", i, p, x);

        if (x % 29 == 0)
        {
            printf("Not a great number\n");
            break;
        }
        else
        {
            x -= 13;
            p += x % 10;
            i += 3;
        }
    }

    return 0;
}