#include <stdio.h>

int main() {
    int n, sum = 0;

    printf("ENTER A NUMBER: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        sum += i;  
        //here the sum is printed from zero
    }

    printf("SUM OF FIRST  %d NATURAL NUMBER IS = %d\n", n, sum);

    return 0;
}
