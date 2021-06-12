//Next_big_num


#include<stdio.h>

// void main(){
//     int a[6]={8,1,4,6,9,5};
//     for(int i=0;i<6;i++){
//         int next = -1;
//         for(int j=i+1;j<6;j++){
//             if(a[i]<a[j]){
//                 next=a[j];
//                 break;
//             }
//         }
//         printf("%d->%d ",a[i],next);
//     }
// }







void sort(int a[]){
    for(int i=0;i<6;i++){
        for(int j=0;j<6;j++){
            if(a[i]<a[j]){
                int temp = a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
}

void main(){

    int n=6;
    int arr[6]={8,1,4,6,9,5};
    int a[6];
    for(int i=0;i<6;i++){
        a[i]=arr[i];
    }

    for(int i=0;i<6;i++){
        printf("%d ",a[i]);
    }

    printf("\n");

    sort(arr);

    // for(int i=0;i<6;i++){
    //     printf("%d ",arr[i]);
    // }

    // printf("\n");

    for(int i=0;i<6;i++){
        for(int j=0;j<6;j++){
            if(a[i]==arr[j]){
                printf("%d->%d  ",a[i],arr[j+1]);
            }
        }
    }
}