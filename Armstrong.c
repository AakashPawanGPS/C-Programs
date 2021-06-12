//Armstrong num

#include<stdio.h>

int power(int base ,int pow){
    for(int i=0;i<pow ; i++){
        base*=base;
    }
    return base;
}

void main(){
    int ab=153;
    int a;

    int p=1;
    int len=0;
    int sum=0;
    int rem;

    int temp=a=ab;

    while(a/p){
        p*=10;
        len++;
    }

    a=153;

    while(a!=0){
        rem=a%10;
        int pow=power(a,len);
        sum+=pow;
        a=a/10;

    }

    if(temp==ab){
        printf("Yes");
    }
    else{
        printf("No");
    }
    

}