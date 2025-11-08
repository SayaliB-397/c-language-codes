#include<stdio.h>
    int main (){
        int a,b,temp;
        printf("SWAPPING THE NUMBERS \nenter two numbers:");
        printf("\nA=");
        scanf("%d",&a);
        printf("B=");
        scanf("%d",&b);
        temp=a;
        a=b;
        b=temp;
        printf("After swapping the numbers will be\nA=%d,B=%d",a,b);
        return 0;
    }



    