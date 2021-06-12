//Reverse and add until palindrome

#include<stdio.h> 

long long int reverse(long long int num) { 
    long long int revnum = 0; 
    while(num) { 
        revnum = revnum * 10 +(num%10); 
        num /= 10; 
    } 
    return revnum; 
}

int main() {
    long long int num , sum ; 
    scanf("%lld" , &num); 
    while(1) {
        sum = num + reverse(num); 
        if( sum == reverse(sum)) 
            break; 
            num = sum; 
    }
    
    printf("%lld" , sum); 
    
    return 0; 
    
}