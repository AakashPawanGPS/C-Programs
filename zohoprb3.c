#include<stdio.h>

int main(){
	unsigned char c = (int )0.24;
    printf("%d\n",c);
	for(;c++;);
	printf("%d",c);
	return 0;
}