//Number and its occurrence

#include<stdio.h> 
#include<malloc.h> 
int main() {
    int N , ind , num , counter , flag , ind1; 
    scanf("%d" , &N); 
    int *arr , *count; 
    arr= (int*)calloc(N , sizeof(int)); 
    count= (int*)calloc(N , sizeof(int)); 
    counter = 0; 
    for(ind = 0 ; ind < N ; ind++) { 
        scanf("%d" ,&num); 
        for(ind1 = 0, flag = 0 ; ind1 < counter ; ind1++) { 
            if(arr[ind1] == num) { 
                count[ind1]++; flag = 1; 
            } 
        }
        if(flag == 0) { 
            arr[counter] = num; 
            count[counter]++; 
            counter++; 
        } 
    }
    for(ind = 0 ; ind < counter ; ind++) 
        printf("%d-%d\n" , arr[ind] , count[ind]); 
        
    return 0; 

}