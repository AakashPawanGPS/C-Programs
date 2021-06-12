//sort  and merge array w/o duplicates
#include<stdio.h> 
#include<malloc.h> 
int main() {
    int N1 , N2, ind, ind1; 
    scanf("%d", &N1); 
    int arr[N1]; 
    for(ind = 0 ; ind < N1 ; scanf("%d" , &arr[ind++])); 
    scanf("%d" ,&N2); 
    int arr1[N2]; 
    int *newarr , newind ; 
    newarr = (int*)calloc(N1+N2 , sizeof(int)); 
    for(ind = 0 ; ind < N2 ; scanf("%d" , &arr1[ind++])); 
    ind = ind1 = newind = 0 ; 
    while(ind < N1 && ind1 < N2) { 
        if(arr[ind] == arr1[ind1]) { 
            newarr[newind++] = arr[ind]; 
            ind++; 
            ind1++; 
        }
        else if( arr[ind] < arr1[ind1])
            newarr[newind++] = arr[ind++]; 
        else if(arr[ind] > arr1[ind1]) 
            newarr[newind++] = arr1[ind1++]; 
        }
    while(ind == N1 && ind1 < N2) 
        newarr[newind++] = arr1[ind1++]; 
    while(ind1 == N2 && ind < N1) 
        newarr[newind++] = arr[ind++]; 
        
    for(ind = 0 ; ind < newind ; ind++) 
        printf("%d ", newarr[ind]); 
        
    return 0; 

}