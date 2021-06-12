//Mirror_Inverted_Right_triangle

#include<stdio.h>

void main(){
    int num=5,n;
    n=num;
    int i,j,k;
    for( i=1;i<=num;i++){
        for( j=1;j<i;j++){
            printf(" ");
        }
        for( k=1;k<=n;k++){
            printf("*");
        }
        n--;
        printf("\n");
    }
}
