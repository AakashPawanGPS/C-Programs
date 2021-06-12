//Threshold_count

#include<stdio.h>

int main(){
	int n,i,count=0,t;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
		scanf(" %d",&a[i]);
	}
	scanf("%d",&t);
	for(i=0;i<n;i++){
		count+=((a[i]/t)+((a[i]%t)==0?0:1));
	}
	printf("%d",count);
	return 0;
}
