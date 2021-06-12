//Window size and max(3)

#include<stdio.h>
#include<limits.h>
#include<stdlib.h>
#include<conio.h>

int main(){
	
	int size , arr[1000],c1,c2,win,max=-9999;
	scanf("%d",&size);
	for(c1=0;c1<size;c1++){
		scanf("%d",&arr[c1]);
	}
	scanf("%d",&win);
	
	for(c1=0;c1<=size-win;c1++){
		for(c2=0;c2<win;c2++){
			if(max<arr[c1+c2]){
				max=arr[c1+c2];
			}
		}
		printf("%d ",max);
		max=-9999;
		
	}
	getch();
	return 0;
}


