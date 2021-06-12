#include<stdio.h>
#define THIS 0X01
#define THAT 0X02


int main(){
	unsigned char va = 0X00;
	va|=THIS;
	va|= THAT;
	int the = THIS | THAT ;
	printf("%d\n",the);
	if(va== the){
		printf("%d",THAT);
	}
	if(va==THAT>>1){
		printf("%d",THIS);
	}
	return 0;
}
