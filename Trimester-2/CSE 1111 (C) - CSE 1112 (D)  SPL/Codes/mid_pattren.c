/*
     0
    101
   21012
  3210123 
 432101234     
    
*/

#include<stdio.h>
int main()
{
    int n, i, j, k, x, y=1, zero=0;
    scanf("%d", &n); if (n % 2 == 0) return 1;

    for (i = 1; i <= n; i++) {
        x = i - 1; y=1;           // ektur jonne hoy nai !!
        for (j = 1; j <= n-i; j++) printf(" ");
        for (k = 1; k <= (2*i)-1; k++) {
            if (k == i) printf("%d", zero);
            else if (k < i) {
                printf("%d", x);
                x--;
            }
            else {
                printf("%d", y);
                y++;
            }
        } printf("\n");
    }

    // before going anyware just print Hello World 
    printf("Hello World !"); 
    return 0;
}