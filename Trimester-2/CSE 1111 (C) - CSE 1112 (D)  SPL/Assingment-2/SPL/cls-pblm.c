#include<stdio.h>
#include<string.h>

int main() {
        char str[] = "I Live in Dhaka";
        char *pStr = NULL;

        pStr = str;

        int word = 1;

        while (*pStr) {
              if (*pStr == ' ') word++;
              pStr++;
        }

        printf("word = %d\n", word);

        return 0;
}
