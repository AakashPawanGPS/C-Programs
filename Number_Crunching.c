//Number_Crunching

#include<stdio.h>

int main(){
	
	int num1,num2,pow=1,n=0,rotate;
	scanf("%d%d",&num1,&num2);
	
	while(num1/pow){
		pow*=10;
		n++;
	}
	pow/=10;
	rotate = num1;
	
	while(rotate!=num2 && n){
		rotate = (rotate%10)*pow+(rotate/10);
		n--;
	}
	
	if(rotate == num2 && n!=0){
		printf("Yes");
	}
	else{
		printf("No");
	}
	return 0;
	
}

//54123 23541
