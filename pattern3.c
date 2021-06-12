//Right_and_Inverted

#include<stdio.h>

void main(){
    int num=5;
    for(int i=0;i<num-1;i++){
        for(int j=0;j<i+1;j++){
            printf("*");
        }
        printf("\n");
    }
    for(int i=0;i<=num-1;i++){
        for(int j=num;j>=i+1;j--){
            printf("*");
        }
        printf("\n");
    }
}