//mirrored inverted right triangle

#include<stdio.h>

void main(){
    int num=5;
    for(int i=1;i<=num;i++){
        for(int j=0;j<i;j++){
            printf(" ");
        }
        for(int k=1;k<=num;k++){
            printf("*");
        }
        printf("\n");
    }
}