#include<stdio.h>
void main(){

    int num=5;
    for(int i=1;i<=num;i++){
        for(int j=1;j<=num;j++){
            if(i+j<=num){
                printf(" ");
            }
            else{
                printf("*");
            }

        }
        printf("\n");
    }

}