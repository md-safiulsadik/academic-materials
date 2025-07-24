#include <stdio.h>
#include <string.h>
#include <ctype.h>

int hasUniqueCharacters(char *str) {
    int seen[256] = {0};

    while (*str != '\0') {
        if (seen[*str] != 0) {
            return 0;
        }
        seen[*str] = 1;
        str++;
    }
    return 1;
}

int isVowel(char ch) {
    ch = tolower(ch);
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}

void modifyString(char str[]) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (isVowel(str[i])) {
            char nextChar = str[i] + 1;
            while (isVowel(nextChar)) {
                nextChar++;
            }
            str[i] = nextChar;
        }
    }
}

int isPrime(int num) {
    if (num < 2) return 0;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return 0;
    }
    return 1;
}

int isLuckyNumber(int num) {
    return (num % 2 == 1 && isPrime(num));
}

int main() {
    char name[50];
    int age;

    printf("Name: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0';
    
    printf("Age: ");
    scanf("%d", &age);

    if (hasUniqueCharacters(name)) {
        printf("Unique: YES\n");
        modifyString(name);
        printf("Modified string: %s\n", name);
    } else {
        printf("Unique: NO\n");
    }

    if (isLuckyNumber(age)) {
        printf("Lucky Number: YES\n");
    } else {
        printf("Lucky Number: NO\n");
    }

    return 0;
}
