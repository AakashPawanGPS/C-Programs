//Sorting on number of factors

#include<stdio.h> 
#include<math.h>

int findFactCount( int n){
    int ctr,sqr,count=2; 
    sqr = (int)sqrt(n); 
    if(n == 1)
        count--; 
    else{
        for( ctr = 2 ; ctr<= sqr ; ctr++ ) 
            if( n % ctr == 0 )
                count +=2; 
                ctr--;
            if( ctr * ctr == n ) 
                count--;
        }
    return count;
}

int main(){
    int arr[1000],fact[1000],ctr,size,max=-1,maxInd=-1,temp,ctr1; 
    scanf("%d",&size);
    for( ctr =0 ; ctr < size ; ctr++ ) 
        scanf("%d",&arr[ctr]);
    for( ctr =0 ; ctr < size ; ctr++ ) 
        fact[ctr]=findFactCount(arr[ctr]);
    for( ctr =0 ; ctr < size ; ctr++ ){
        for( ctr1 =0 ; ctr1 < size ; ctr1++ ){
            if( fact[ctr1] != -1 && max < fact[ctr1]){
                max = fact[ctr1]; maxInd = ctr1;
            }
        }
/* temp = arr[ctr]; arr[ctr] = arr[maxInd]; arr[maxInd] = temp;

temp = fact[ctr]; fact[ctr] = fact[maxInd]; fact[maxInd] = temp;*/ 

        fact[maxInd] = -1;
        printf("%d ",arr[maxInd]); 
        max = -1;
        maxInd=-1;
    }

/*for( ctr =0 ; ctr < size ; ctr++ ) printf("%d ",arr[ctr]);
*/
}