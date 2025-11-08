#include<stdio.h>

int main(){
    float current, R, voltage;

    printf("Enter the current (in Amperes):");
    scanf("%f",&current);

    printf("Enter the external resistance (in Ohms):");
    scanf("%f",&R);

    voltage = current * R;

    printf("voltage= %.2f ohms",voltage);

    return 0;

}

