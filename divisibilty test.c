#include <stdio.h>

int main() {
    int n
    printf("Enter a number: ");
    scanf("%d", &n);

    if (n % 2 == 0 && n % 3 == 0) {
        printf("%d is even and divisible by 3.\n", n);
    }
    else if (n % 2 == 0) {
        printf("%d is even but not divisible by 3.\n", n);
    }
    else if (n % 3 == 0) {
        printf("%d is divisible by 3 but not even.\n", n);
    }
    else {
        printf("%d is neither even nor divisible by 3.\n", n);
    }

    return 0;
}
