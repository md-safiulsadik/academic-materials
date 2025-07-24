#include <stdio.h>
#define max_customer 2

float updateBalance(float *arr, int id, int type, float amount)
{
    switch (type)
    {
    case 1:
        if (arr[id] < amount) {
            return -1;
        }
        else {
            arr[id] -= amount;
            return arr[id];
        }
        break;

    case 2:
        arr[id] += amount;
        return arr[id];
        break;

    default:
        printf("Invalid input");
    }
}

int main(void)
{
    float balance;
    float arr[max_customer];

    for (int i = 0; i < max_customer; i++)
    {
        printf("Enter balance -> Costumer ID-%d: ", i);
        if (scanf("%f", &arr[i]) != 1)
        {
            fprintf(stderr, "Invalid input!\n");
            return 1;
        }
        else if (balance < 1)
        {
            printf("Input must grater than 0(zero).\n");
            return 1;
        }
        
    }

    int id;
    int type;
    float amount;

    printf("Enter ID, Type(1 for withdraw 2 for deposit), Amount: \n");
    if (scanf("%d %d %f", &id, &type, &amount) != 3)
    {
        fprintf(stderr, "Invalid input!");
        return 1;
    }
    else if (id >= max_customer)
    {
        printf("Invalid ID\n");
        return 1;
    }
    else if (type < 1 || type > 2)
    {
        printf("Invalid input\nPlease input 1 for withdraw 2 for deposit\n");
        return 1;
    }
    
    float old_balance = arr[id];
    float new_balance = updateBalance(arr, id, type, amount);
    if (new_balance == -1){
        printf("Not sufficient balance");
        return 1;
    }
    
    printf("\n");
    printf("Customer ID: %d\nOld balance: %2.2f\nNew balance: %2.2f\n", id, old_balance, new_balance);
    
    return 0;
}