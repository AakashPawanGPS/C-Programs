#include<stdio.h>

void main(){
    int a=153;
    int pow=1;
    int len=0;

    while(a/pow){
        pow*=10;
        len++;
    }

    printf("%d",len);
}