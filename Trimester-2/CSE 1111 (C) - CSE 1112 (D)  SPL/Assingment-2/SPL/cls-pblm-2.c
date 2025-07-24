#include<stdio.h>
#include<stdlib.h>

struct Student {
    char name[100];
    int id;
    int marks[3][4];
};

int main() {
    struct Student st;

    gets(st.name);
    while (getch() == '\n');

    scanf("%d", &st.id);

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
                scanf("%d", &st.marks[i][j]);
        }
    }

    puts(st.name);
    printf("%d\n", st.id);

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
                printf("%d ", st.marks[i][j]);
        } printf("\n");
    }

    return 0;
}
