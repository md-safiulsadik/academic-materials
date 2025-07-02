#include <stdio.h>

int hasUniqueCharacters(char *str) {
    int seen[256] = {0};

    while (*str != '\0') {
        if (seen[*str] != 0) {
            return 0;
        }
        else seen[*str] = 1;
        str++;
    }
    return 1;
}

void modifyString(char str[]) {
    return 0;
}


int main() {
    char name[50];
    int age;

    fgets(name, sizeof(name), stdin);
    // fflush(stdin);
    scanf("%d", &age);

    (hasUniqueCharacters(name)) ? printf("Unique: YES\n") : printf("Unique: NO\n");

    return 0;
}
