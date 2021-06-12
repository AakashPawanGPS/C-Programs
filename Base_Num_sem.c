//Base_Num_Sum

#include<stdio.h> 
int main() { 
int num1 , num2 , base , sum=0 , newnum, carry , power ; 
scanf("%d%d%d", &num1 , &num2 , &base); 
power = 1; 
carry = newnum = 0; 
while( num1/power || num2/power ) {
	sum = (((num1/power)%10) + ((num2/power)%10)) + carry; 
	newnum = (sum%base) * power + newnum; 
	carry = sum / base;
	power *= 10; 
	}
	if(carry) 
		newnum = carry * power + newnum; 
	printf("%d" , newnum);
return 0; 
}
