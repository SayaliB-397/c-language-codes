#include<stdio.h>

int main(){
    int age;
    printf("\nDRIVING LICENSCE\nENTER YOUR AGE:");
    scanf("%d",&age);
    if(age>18){
        printf("\nGET A DRIVERS LICENSE");
    }
    else if(age==18){
        printf("\nGET A LEARNING LICENSE");
    }
     else
        printf("\nDRIVE A TOY CAR");

        return 0;
}


    
