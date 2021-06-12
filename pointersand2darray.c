#include<stdio.h>

void main(){
    int a[3][3]={6,2,5,0,1,3,4,9,8};
    int *p;
    //not applicable bcoz a is 2d p=a;
    p=&a[0][0]; // p=a[0] not p=a[0][0]
    printf("%p",*(*(a+1)+2));   // a[1][2]=*(*(a+1)+2)=*(a[i]+j)
    printf("%p",*(*a+1));
}