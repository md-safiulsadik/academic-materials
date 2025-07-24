#include <stdio.h>
 
int main() {
    const float rate = 0.15;
    char name[20];
    float salles, salary, total = 0.0;
    scanf("%s %f %f", name, &salary, &salles);
    
    total = salary + (rate * salles);
    printf("TOTAL = R$ %.2f\n", total);
    return 0;
}