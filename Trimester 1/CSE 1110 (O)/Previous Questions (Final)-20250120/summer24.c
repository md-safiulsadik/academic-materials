#include<stdio.h>

int main()
{   
    int choice;
    float kilo;

    printf("Select the service:\n");
    printf("1.Car\n");
    printf("2.Bus\n");
    printf("3.Bike\n");
    
    printf("Enter your choice: ");
    scanf("%d", &choice);

    printf("Enter your distance: ");
    scanf("%f", &kilo);
    
    switch (choice)
    {
    case 1:
        printf("You selected Car\n");
        printf("Your total charge for the trip is: %.2f\n", 500*kilo);
        break;

    case 2:
        printf("You selected Bus\n");
        printf("Your total charge for the trip is: %.2f\n", 300*kilo);
        break;

    case 3:
        printf("You selected Bike\n");
        printf("Your total charge for the trip is: %.2f\n", 100*kilo);
        break;    

    default:
        printf("Invalid service type selected.\n");
    }

    return 0;
}
