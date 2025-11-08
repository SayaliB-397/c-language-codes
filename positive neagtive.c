#include<stdio.h>
    int main(){
        int n;
        printf("\nLETS FIND THE NUMBER IS POSITVE OR NEGATIVE:\nENTER THE NUMBER:");
        scanf("%d",&n);
        if(n>0){
            printf("\n the number is positive");
        }
        else if(n==0){
            printf("\nTHE NUMBER IS ZERO"); 
        }
        else
            printf("\nTHE NUMBER IS NEGATIVE");
        return 0;
    }    