#include<stdio.h>
int fun(int x){
    if(x>2){
        fun(--x);
    }
    else if(x>1){
        fun(fun(--x));
    }
    printf("%d",x);
    return x;
}
int main(){
    fun(4);
    return 0;
    
}