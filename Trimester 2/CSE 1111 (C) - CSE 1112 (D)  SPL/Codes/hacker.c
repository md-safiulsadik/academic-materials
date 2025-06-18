#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define MAX_LEN 100

int main() 
{
    char c;
    char str1[MAX_LEN];
    char str2[MAX_LEN];
    
    scanf(" %c", &c);
    scanf("%s", &str1);
    scanf("%s", &str2);
    
    printf("%c", c);
    printf("%s", str1);
    printf("%s", str2);
    
    return 0;
}