#include <stdio.h>

int main() {
    int currentyear, birthyear, age;
    currentyear = 2025;

    printf("\nPLEASE ENTER YOUR BIRTHYEAR:\n");
    scanf("%d", &birthyear);

    age = currentyear - birthyear;

    printf("YOUR AGE IS: %d\n", age);

    return 0;
}
 