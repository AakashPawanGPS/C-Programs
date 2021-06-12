#include <stdio.h>
#include <stdlib.h>

void main(){
    int size, k;
    printf("Enter size of string\n");
    scanf("%d", &size);
    char *arr = (char *)malloc(size*sizeof(char));
    printf("Enter elements of string\n");
    for(int i=0; i<size; ++i){
        scanf("%s", &arr[i]);
    }
    printf("Enter no of times to rotate:\n");
    scanf("%d", &k);

    while( k-- ){
        char temp = arr[size-1];
        for(int i=size-1; i>0; --i){

            arr[i] = arr[i-1];
        
        }
        arr[0] = temp;
    }

    for(int d=0; d<size; ++d){
        printf("%c", arr[d]);
    }

}

