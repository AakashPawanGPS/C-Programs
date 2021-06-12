//Mirror Right

#include<stdio.h>

void main(){
    int n=10;
    int i,j;

    for(i=0;i<=n;i++){
        for(j=0;j<=n;j++){
            if(i+j<=n){
                printf(" ");
            }
            else {
                printf("*");
            }
        }
        printf("\n");
    }
}