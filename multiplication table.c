#include<stdio.h>
    int main(){
        int n;
        printf("|NUMBER TABLE|\n|ENTER THE NUMBER|");
        scanf("%d",&n);
        for(int i=1 ;i<=10;i++)
        printf("%d into %d=%d\n",n,i,n*i);

        return 0;
    }

          

    