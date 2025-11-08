#include<stdio.h>

int main(){
    int weight;

    printf("WEIGHT (adult person of age 25)");

    printf("\nEnter your weight(in kg)");
    scanf("%d",&weight);

    if(weight>55){
        printf("you are healthy");

    }
    else if(weight>80){
        printf("you are overweight");
    }
    else if(weight<40 && weight>30){
        printf("you need to gain some weight");

    }
    else
        printf("invalid weight");

    return 0;    

}