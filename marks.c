#include<stdio.h>

int main(){
    float sub1,sub2,sub3,sub4,sub5,tmarks,avgmarks,percentage;

    printf("\nPERCENTAGE OF THE STUDENTS:\nEnter subject marks!\nMATHEMATICs=");
    scanf(" %f "  &sub1);

    printf("BIOLOGY=");
    scanf("%f",&sub2);

    printf("PHYSICS=");
    scanf("%f",&sub3);

    printf("CHEMISTRY=");
    scanf("%f",&sub4);

    printf("ENGLISH=");
    scanf("%f",&sub5);

    tmarks= sub1+sub2+sub3+sub4+sub5;
    printf("total marks =%f\n" ,tmarks);

    avgmarks=tmarks/5;
    printf("total average marks=%f/n",avgmarks);

    percentage=tmarks*100/500;
    
    if(percentage>=90){
        printf("you passes in first distinction");
    }
    else if(percentage>=60){
        printf("you passed in second distinction");
    }
    else if(percentage>=40){
        printf("you have passed the exam");
    }

    else if(percentage<35) {
        printf("you are failed");
    }

    else
        printf("you havent wrote the exam");    

    return 0;
}


     
    





    
    
    

