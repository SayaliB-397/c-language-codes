#include <stdio.h>

int main() {
    int choice;
    float amount, price, change;

    printf("-------BEAUTY PRODUCT SALE--------\n");
    printf("1. Foundation         - 800\n");
    printf("2. Moisturizer        - 600\n");
    printf("3. Compact Powder     - 500\n");
    printf("4. Niacinamide        - 650\n");
    printf("5. Lipsticks          - 550\n");
    printf("6. Lipgloss           - 300\n");
    printf("7. Eyeliner           - 400\n");

    printf("Enter your choice (1-7): ");
    scanf("%d", &choice);  

    printf("Enter the amount: ");
    scanf("%f", &amount);

    switch (choice) {
        case 1:
            price = 800;
            printf("You selected Foundation.\n");
            break;

        case 2:
            price = 600;
            printf("You selected Moisturizer.\n");
            break;

        case 3:
            price = 500;
            printf("You selected Compact Powder.\n");
            break;

        case 4:
            price = 650;
            printf("You selected Niacinamide.\n");
            break;

        case 5:
            price = 550;
            printf("You selected Lipsticks.\n");
            break;

        case 6:
            price = 300;
            printf("You selected Lipgloss.\n");
            break;

        case 7:
            price = 400;
            printf("You selected Eyeliner.\n");
            break;

        default:
            printf("Invalid choice, please enter a number between 1-7.\n");
            return 0;  
    }

