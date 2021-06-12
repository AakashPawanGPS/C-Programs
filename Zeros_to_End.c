// //Zeros_to_End

// #include<stdio.h>
// #include<stdlib.h>

// void main(){
//     int a[]={1,2,0,3,0,4,5,0,9};
//     int n = 9;
//     int count = 0;
//     for(int i=0;i<n;i++){
//         if(a[i]!=0){
//             a[count++]=a[i];
//         }
//     }
//     while(count<n){
//         a[count++]=0;
//     }

//     for(int i=0;i<n;i++){
//         printf("%d ",a[i]);
//     }
    
// }

#include <stdio.h>
#include <stdlib.h>

void swap(int *arr, int a, int b){
    int temp = arr[a];
    arr[a] = arr[b];
    arr[b] = temp;
}

void main(){
// 1 2 1 0 2 0 4 5 0
    int n=0;
    int *arr;
    char ch;
    arr = (int*)malloc(sizeof(int));
    while( scanf("%d%c", &arr[n], &ch ) && ch!='\n'){
        n++;
    }

    int size = n+1;
    int j=0;
    for(int i=0; i<size; ++i){
        if( arr[i]!=0){
            swap(arr, i, j);
            ++j;
        }
    }
        
    
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
}