#include<stdio.h>
    int main(){
        char operater;
        float a,b;
        printf("CALCULATOR\nENTER THE OPERATOR\n[+,-,*,/]");
        scanf(" %c",&operater);
        printf("ENTER the number:\nA=");
        scanf(" %f",&a);
        printf("B=");
        scanf("%f",&b);


        switch (operater){
        case '+':printf("result=%.2f",a+b);
        break;

        case'-':printf("result=%.2f" ,a-b);
        break;

        case'*':printf("result=%.2f" ,a*b);
        break;

        case'/':printf("result=%.2f" ,a/b);
        break;

        default:printf("Invalid operator");
    }
    return 0;
        }

        
        

        
        

    
        
    
    
    
    