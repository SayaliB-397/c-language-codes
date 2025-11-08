#include<stdio.h>
int main(){

    float amount, discount;

    printf("Enter total shopping amount: ");

    scanf("%f", &amount);

    if(amount >= 5000)
        discount = amount * 0.2;

    else if(amount >= 2000)
        discount = amount * 0.1;

    else
        discount = amount * 0.05;
        
    printf("Discount = %.2f\nFinal amount = %.2f", discount, amount - discount);
    return 0;
}
