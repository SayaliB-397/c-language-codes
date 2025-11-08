#include <stdio.h>

int main()
{
    int choice;
    float amount, price, change;

    printf("--------|VENDING MACHINE|--------\n");
    printf("1. Magnum icecream  - Rs 100\n");
    printf("2. Dairy milk       - Rs 50\n");
    printf("3. cold drink       - Rs 15\n");
    printf("4. smooth           - Rs 20\n");
    printf("5. cold coffe       - Rs 60\n");
    printf("--------|VENDING MACHINE|--------\n");

    printf("Enter your choice (1-5) :- ");
    scanf("%d", &choice);

    printf("Enter the amount you inserted : ");
    scanf("%f", &amount);

    switch (choice)
    {

    case 1:
        price = 100;
        printf(" you selected magnum icecream.\n");
        break;
    case 2:
        price = 50;
        printf("you slected dairy milk.\n");
        break;
    case 3:
        price = 15;
        printf("you selected cold drink.\n");
        break;
    case 4:
        price = 20;
        printf("you selected smooth.\n");
        break;
    case 5:
        price = 60;
        printf("you selected cold coffee.\n");
        break;

    default:
        printf("invalid choice, please enter number between (1-5).");

        return 0;
    }

    if (amount >= price)
    {
        change = amount - price;
        printf("payment successful. please collect your item.\n");
        printf("your change %.2f\n", change);
    }
    else
    {
        printf("insufficent amount add more money %.2f\n", price - amount);
    }
    printf("thanku for using vending mechine ");

    return 0;
}