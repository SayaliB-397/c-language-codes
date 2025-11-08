#include <stdio.h>

int main() {
    int age;

    printf("Age classification:");
    printf("\nEnter your age: ");
    scanf("%d", &age);

    if (age >= 0 && age <= 12) {
        printf("you are a baccha.\n");
    }
    else if (age >= 13 && age <= 19) {
        printf("You are a Teenager.\n");
    }
    else if (age >= 20 && age <= 59) {
        printf("You are an Adult.\n");
    }
    else if (age >= 60) {
        printf("You are a senior citizen.\n");
    }
    else {
        printf("Invalid age entered!\n");
    }

    return 0;
}
