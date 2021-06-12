//Window size and sort

#include<stdio.h>
#include<math.h>

int perfect_square(int a){
    int sq=sqrt(a);
    if(sq*sq == a){
        return 5;
    }
    return 0;
}

int multiple(int b){
    if(b%4 == 0 && b%6==0){
        return 4;
    }
    else{
        return 0;
    }
}

int even(int c){
    if(c%2 == 0){
        return 3;
    }
    return 0;
}

void main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    int sum[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    for(int i=0;i<n;i++){
        sum[i]=(perfect_square(a[i]) + multiple(a[i]) + even(a[i]));
    }

    for(int i=0;i<n;i++){
        printf("<%d,%d>,",a[i],sum[i]);
    }

}

