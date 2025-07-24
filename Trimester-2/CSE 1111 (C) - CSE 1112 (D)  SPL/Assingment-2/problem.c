#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct Students {
    char name[50];
    int id;
    int marks[3][4];
};

int main() {
    int numOfStudent;

    printf("How many students? ");
    scanf("%d", &numOfStudent);
    while (getchar() != '\n'); 

    struct Students st[numOfStudent];

    for (int i = 0; i < numOfStudent; i++) {
        printf("Enter student name: ");
        gets(st[i].name);

        printf("Enter student ID: ");
        scanf("%d", &st[i].id);
        while (getchar() != '\n');  // Clear newline after scanf

        for (int j = 0; j < 3; j++) {
            printf("Enter marks for subject %d:\n", j + 1);
            for (int k = 0; k < 4; k++) {
                printf("  Test %d: ", k + 1);
                scanf("%d", &st[i].marks[j][k]);
            }
            while (getchar() != '\n');
        }
        printf("\n");
    }

    printf("\n=== Student Report ===\n");

    for (int i = 0; i < numOfStudent; i++) {
        printf("Student Name: %s\n", st[i].name);
        printf("Student ID: %d\n", st[i].id);

        for (int j = 0; j < 3; j++) {
            int max = st[i].marks[j][0];
            for (int k = 1; k < 4; k++) {
                if (st[i].marks[j][k] > max)
                    max = st[i].marks[j][k];
            }
            printf("Highest mark for Subject %d: %d\n", j + 1, max);
        }
        printf("\n");
    }

    return 0;
}
