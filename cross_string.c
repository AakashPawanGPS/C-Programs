//Cross_String

#include<stdio.h>

void main(){
    char a[100];
    scanf("%s",&a);

    int l;
    for(l=0;a[l];l++);
    printf("%d\n",l);

    for(int i=0;i<=l;i++){
        for(int j=0;j<=l;j++){
            if((i==j)||(i+j==l-1)){
                printf("%c",a[j]);
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }

}