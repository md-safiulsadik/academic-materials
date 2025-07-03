#include <stdio.h>

int getSize(char str[]) {
    int length = 0, i = 0;
    while (str[i] != '\0') {
        i++;
        length += 1;
    } return length;
}

void removeAllDuplicates(char str[]) {
    int seen[256] = {0};
    int i = 0, j = 0;

    while (str[i] != '\0') {
        char ch = str[i];

        if (seen[ch] == 0) {
            seen[ch] = 1;
            str[j++] = ch;
        }
        i++;
    }
    str[j] = '\0';
}

void checkPalindrome(char *str) {
    int len = getSize(str);

    for (int i = 0; i < len - 1; i++) {
        for (int j = i + 1; j < len; j++) {
            if (str[i] != str[j]) {
                printf("not palindrome\n");
                return;
            }
        }
    }
    printf("palindrome\n");
}

int main() {
    char str[100];
    scanf("%s", &str);
    checkPalindrome(str);
    removeAllDuplicates(str);
    puts(str);
    return 0;
}
