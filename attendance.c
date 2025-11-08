#include<stdio.h>

int main(){
    int attendance;

    printf("to check whether students are eligible for exam or not");
    printf("enter attendance(in %)=");
    scanf("%d", &attendace);

    if(attendance>=90){
        printf("you are can surely write the exam");

    }
    else if(attendance>=75){
        printf("your attendance is moderate ,but still you can write the exam");
    }
    else if(attendance<75){
        printf("you are under defaulter's list ");
    }
    else 
        printf("you need to attend lectures regularly...you are not allowed to write the exam");

        return 0;

}


