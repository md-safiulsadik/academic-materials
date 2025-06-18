#include<stdio.h>

struct Students {
    char name[100];
    int roll;
    int id;
};

int main() {

    int result = 0;
    float transAmount;

    do {
        printf("Enter amount: ");
        result = scanf("%f", &transAmount);
        if (result != 1) {
                printf("Invalid input. Please enter a numeric value.\n");
        }
        while (getchar() != '\n');
    } while (result != 1);


    struct Students st[2];
    for (int i = 0; i < 2; i++) {
        while (getchar() != '\n');
        printf("Enter student info (name -> roll -> id): ");
        gets(st[i].name);
        scanf("%d", &st[i].roll);
        scanf("%d", &st[i].id);
    }

    for (int i = 0; i < 2; i++) {
        // printf("Name: %s\n", st[i].name);
        puts(st[i].name);
        printf("Roll: %d\n", st[i].roll);
        printf("Id: %d\n", st[i].id);
    }

    return 0;
}
