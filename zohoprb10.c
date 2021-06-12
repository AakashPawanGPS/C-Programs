#include<stdio.h>
int main(){
    char *str[] ={"12345","23456","34567","45678"};
    char **sp[] = {str+2,str,str+3,str+1};
    char ***ps;
    ps=sp;
    printf("%s",**(ps+3)+2);
    return 0; 
}