//Triplet_sum = 0
//Solve using 3 loops (n^3)

#include<stdio.h>
int main(){
    int a[100];
    int n;
    printf("Enter The Length : ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(a[j]>a[j+1]){
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
        }
    }
    }
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }


    int i,r,l;
    for(i=0;i<n;i++){
        l=i+1;
        r=n-1;
        while(l<r){
            if(a[i]+a[l]+a[r]>0){
                r--;
            }
            else if(a[i]+a[l]+a[r]<0) l++;
            else{
                printf("\n%d %d %d ",a[i],a[l],a[r]);
                r--;l++;
            }
        }
    }
    return 0;
}
