#include <stdio.h>

int main() {
    int a, b, sum;

    printf("\n\nSUMMATION OF TWO NUMBERS\n");
    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    sum = a + b;

    printf("The answer is %d\n", sum);

    return 0;
}