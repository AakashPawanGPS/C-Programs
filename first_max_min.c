//First max , first min , second mac , second min

#include<stdio.h> 
#include<malloc.h> 
void swap(int* , int,int); 
void maxHeapify(int* , int* , int); 
void minHeapify(int* , int* , int); 
int main() {
    int ind , parent,left,right , n ; 
    //int arr[]={5,15,10,25,55,35,75,45,95,50,70,40,60,90,3}; 
    int *arr ; 
    scanf("%d" , &n); 
    arr = (int*)malloc( n * sizeof(int)); 
    for(ind = 0 ; ind < n ; ind++){
        scanf("%d" ,&arr[ind]); 
    }
    int safe , count = 0; 
    safe = n ; 
    while(n!=0) {
        for(parent = n / 2 - 1;parent >=0 ; parent--) { 
            if(count % 2 == 0) {
                maxHeapify(arr , &n , parent); 
            }
            else{
                minHeapify(arr , &n , parent); 
            }
        }
        swap(arr , 0, --n); 
        count++; 
    }
    for(ind = safe-1 ; ind >= 0 ; ind--) 
        printf("%d " , arr[ind]); 
    return 0; 
    }
    void swap(int*arr , int pos1,int pos2) {
        int temp; 
        temp = arr[pos1]; 
        arr[pos1]= arr[pos2]; 
        arr[pos2]= temp;
    }
    void maxHeapify(int*arr , int *size , int parent) { 
        int left,right; 
        left= parent * 2+1; 
        right = left + 1; 
        // no child 
            if(left >= *size) return; 
        // 1child
            if(right >= *size) { 
                if(arr[parent] < arr[left]) { 
                    swap(arr , left,parent); 
                    maxHeapify(arr , size , left); 
                }return ; 
            } 
        // 2 child 
            if(arr[parent] < arr[left] || arr[parent] < arr[right]) {
                 if(arr[left] > arr[right]) { 
                     swap(arr, left,parent); 
                     maxHeapify(arr , size , left); 
                }
                else { 
                    swap(arr , right,parent); 
                    maxHeapify(arr , size , right); 
                } 
            }
    }
    void minHeapify(int*arr , int *size , int parent) {
        int left,right; 
        left= parent * 2+1; 
        right = left + 1; 
        // no child 
        if(left >= *size) return; 
        // 1child
        if(right >= *size) { 
            if(arr[parent] > arr[left]) { 
                swap(arr , left,parent); 
                maxHeapify(arr , size , left); 
            }
            return ; 
        }
// 2 child 
if(arr[parent] > arr[left] || arr[parent] > arr[right]) { 
    if(arr[left] < arr[right]) { 
        swap(arr, left,parent); 
        minHeapify(arr , size , left); 
    }else { 
        swap(arr , right,parent); 
        minHeapify(arr , size , right); 
    } 
}
}