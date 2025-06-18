#include <stdio.h>
#define MAX_SIZE 5
void updateBalance(float *customers, int id, int transType, int transAmount);
int inputCheck(int result);


int inputCheck(int result) {
    if (result == 1) {
        while(getchar() != '\n');
        return 1;
    }
    else {
        printf("Invalid input, Please check your input!\n");
        while(getchar() != '\n');
        return 0;
    }
}


void updateBalance(float *customers, int id, int transType, int transAmount)
{
    switch(transType) {
    case 1:
        if (customers[id] < transAmount) puts("Insufficient found!");
        else {
            customers[id] -= transAmount;
            printf("Transaction successful!\n");
            printf("New balance: %.2f", customers[id]);
        }
        break;
    case 2:
        customers[id] += transAmount;
        printf("Transaction successful!\n");
        printf("New balance: %.2f", customers[id]);
        break;
    default:
        puts("Something went wrong!");
    }
}

int main()
{
    float transAmount;
    int id, transType;

  //  for (int i = 0; i < MAX_SIZE; i++) {
    //    printf("Enter an amount (Id->%d): ", i);
      //  scanf("%f", &customers);
    // }

    float customers[] = { 2131.34, 12321, 123123, 12314, 1421 };

    for (int i = 0; i < MAX_SIZE; i++) printf("ID->%d, Amount $%.2f\n", i, customers[i]);

    do {
        do {
            printf("Enter Id: (0-%d): ", MAX_SIZE - 1);
        } while (inputCheck(scanf("%d", &id)) != 1);
        if (id < 0 || id > MAX_SIZE - 1) printf("Please input a valid Id!\n");
        else printf("Current balance: $%.2f\n", customers[id]);
    } while(id < 0 || id > MAX_SIZE - 1);

    do {
        do {
            printf("Enter transaction type (1. Withdrawal / 2. Deposit): ");
        } while (inputCheck(scanf("%d", &transType)) != 1);
        if (transType < 1 || transType > 2) printf("Please input a valid number (1 or 2)!\n");
    } while(transType < 1 || transType > 2);


    do {
        printf("Enter amount: ");
    } while (inputCheck(scanf("%f", &transAmount)) != 1);

    updateBalance(customers, id, transType, transAmount);

    return 0;
}


