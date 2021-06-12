//String to 2D with start and end index

#include<stdio.h>

void main(){
    char s[100]="welcometozohocorporation";
    char arr[5][5];
    int x=0;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            arr[i][j]=s[x];
            x++;
        }
    }
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            printf("%c ",arr[i][j]);
        }
        printf("\n");
    }

    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            //left to right
            if(arr[i][j]=='t'&&arr[i][j+1]=='o'&&arr[i][j+2]=='o'){
                printf("Start Inder : <%d,%d>\nEnd Index : <%d,%d>",i,j,i,j+2);
            }
            if(arr[i][j]=='t'&&arr[i+1][j]=='o'&&arr[i+2][j]=='o'){
                printf("Start Inder : <%d,%d>\nEnd Index : <%d,%d>",i,j,i+2,j);
            }
        }
        printf("\n");
    }


    
}