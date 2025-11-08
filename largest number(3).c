#include<stdio.h>
    int main(){
        int a,b,c;
        printf("\nFINDING THE GREATEST NUMBER\nA=");
        scanf("%d",&a);
        printf("\nB=");
        scanf("%d",&b);
        printf("\nC=");
        scanf("%d",&c);
        if(a>b && a>c){
            printf("largest is %d",a);
        }
        else if (b>c){
            printf("largest is %d",b);
        }  
        else
            printf("largest is %d",c);
        return 0;    


        }
        
        
    
    