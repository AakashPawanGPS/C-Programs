#include<stdio.h>
void main(){
    static int sd;
    int j;
    int i=1;
    for(j=0;j<=10;j+=3){
        switch (j)
        {
        case 1:
            sd++;
            break;
        case 6 :
            sd+=2;
        case 4 :
            sd%=2;
            j=-i;
            continue;
        
        default:
            --sd;
            continue;
        }

    }
    printf("%d",sd+5);
}