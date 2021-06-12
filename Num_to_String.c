//Number_to_String

#include<stdio.h>

int main(){
	char one[21][10]={"zero","one","two","three","four","five","six","seven","eight","nine","ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen"};
	char tens[10][9]={"","ten","twenty","thirty","forty","fifty","sixty","seventy","eighty","ninety"};
	
	int n;
	scanf("%d",&n);
	
	if(n>=0 &&n<=99){
		if(n>=0 && n<=19){
			printf("%s",one[n]);
		}
		else{
			printf(" %s",tens[n/10]);
			if(n%10){
				printf(" %s",one[n%10]);
			}
		}
	}
	else if(n/100){
		printf("%s hundred",one[n/100]);
		if(n%100 == 0){
			printf(" only");
		}
		else{
			int rem;
			rem=n%100;
			if(rem>=1 && rem<=19){
				printf(" and %s",one[rem]);
			}
			else{
				printf(" and %s",tens[rem/10]);
				if(rem%10){
					printf(" %s",one[rem%10]);
				}
			}
			
		}
	}
	return 0;
	
}
