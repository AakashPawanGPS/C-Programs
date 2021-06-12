#include<stdio.h>

int main(){
    int d,a=1;
    d=++a + ++a + a++ + a++ + a++;
    printf("%d %d\n",d,a ); 

}