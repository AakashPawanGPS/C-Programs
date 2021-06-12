//6_5_4 spiral pattern

#include<stdio.h> 

int setNum(int N , int *pow) { 
    int ind , num; num = 0 ; 
    *pow = 1; 
    for(ind = 1 ; ind <= N/2 ; num = num * 10 + N , (*pow) = (*pow) * 10 + 1 , ind++); 
    (*pow) /= 100; 
    
    return num; 
}

int reverse(int num) { 
    int revnum = 0; 
    while(num) { 
        revnum = revnum * 10 + (num % 10); 
        num /= 10; 
    } 
    return revnum; 
    
}

int main() {
    int N , num , pow , row , col; 
    scanf("%d" , &N); 
    num = setNum(N , &pow); 
    for(row = 1 ; row <= N/2 ; row++,printf("\n")) { 
        printf("%d%d",num,reverse(num)); 
        num = num - pow; 
        pow /= 10; 
    }
    for(row = 1 ; row <= N/2 ; row++,printf("\n")) {
        printf("%d%d",num,reverse(num)); 
        pow = pow * 10 + 1; 
        num = num + pow; 
    }
    return 0; 
    
}