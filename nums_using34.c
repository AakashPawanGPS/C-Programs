//nth number using 3 4
#include<stdio.h> 
int main() {
	long long int n , start , end , count , ctr; 
	scanf("%lld" , &n); 
	long long int arr[n];
	start = 0 ; 
	end = 1; 
	count = 2; 
	arr[0] = 3; 
	arr[1] = 4; 
	while(count <= n ) {
		for(ctr = start ; ctr <= end && count <= n ; ctr++) { 
			arr[count++] = arr[ctr] * 10LL + 3; 
			arr[count++] = arr[ctr] * 10LL + 4; 
		}
		start = end + 1; 
		end = count - 1; 
	}
	printf("%lld" , arr[n-1]); 
	return 0; 
	
}