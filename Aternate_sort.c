//Alternate sort

#include<stdio.h>

void ASC_bubblesort(int a[],int n , int start){
	int temp,flag,i;
	do{
		for(i=start,flag=0;i<n-1;i+=2){
			if(a[i]>a[i+2]){
				flag=1;
				temp=a[i];
				a[i]=a[i+2];
				a[i+2]=temp;
			}
		}
	}while(flag==1);
}

void DSC_bubblesort(int a[],int n , int start){
	int temp,flag,i;
	do{
		for(i=start,flag=0;i<n-1;i+=2){
			if(a[i]<a[i+2]){
				flag=1;
				temp=a[i];
				a[i]=a[i+2];
				a[i+2]=temp;
			}
		}
	}while(flag==1);
}

int main(){
	int n,i;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
		scanf(" %d",&a[i]);
	}
	ASC_bubblesort(a,n-1,1);
	DSC_bubblesort(a,n,0);
	
	for(i=0;i<n;printf("%d ",a[i++]));
}
