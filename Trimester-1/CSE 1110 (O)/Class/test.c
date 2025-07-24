#include <stdio.h>
 
int main() {
    int count = 0;
    float n;
    for (int i = 0; i < 6; i++){
        scanf("%d", &n);
        if (n > 0){
            count++;
        }
    }
    printf("%d valores positivos", count);
    return 0;
}