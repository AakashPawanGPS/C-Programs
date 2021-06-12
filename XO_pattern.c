//XO_pattern

#include<stdio.h>

void main(){
    int n,m;
    printf("Enter the values of N , M : ");
    scanf("%d %d",&n,&m);
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            if(i==1 || j==1 || i==m || j==n){
                printf("X ");
            }
            
            else{
                printf("0 ");
            }
            
        }
        printf("\n");
    }
}