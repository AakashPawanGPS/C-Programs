//Odd numbers between the range

#include<stdio.h> 
int main() { 
    int start , end,ctr; 
    scanf("%d %d",&start,&end); 
    if( start % 2 == 0 ) 
        start++; 
    for( ctr = start ; ctr < end ; ctr+=2 ) 
        printf("%d ", ctr); 
    return 0; 
    
}