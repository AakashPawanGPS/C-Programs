//Mathematical_expression

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int top = -1;
char stack[100];

void push(char);
void pop();
int find_top();

void main(){
	char a[100];
	scanf("%s",&a);
	int i;
	for(i=0;a[i]!='\0';i++){
		if(a[i]=='('){
			push(a[i]);
		}
		else if(a[i]==')'){
			pop();
		}
	}
	int res = find_top();
	
	if(res){
		int l,p,q,r=0;
		for(l=0;a[l];l++);
		//printf("%d",l);
		for(p=0;p<l;p++){
			if(a[p]=='*' || a[p]=='/' || a[p]=='+' || a[p]=='-' ){
				if(a[p-1]>96&&a[p-1]<123&&a[p+1]>96&&a[p+1]<123){
					
				}
				else
					break;
			}
		}
		if(p==l)
			printf("Valid");
		else
			printf("Invalid");
	}
	
}

void push(char a){
	stack[top]=a;
	top++;
}

void pop(){
	if(top==-1){
		printf("Invalid");
		exit(0);
	}
	else{
		top--;
	}
}

int find_top(){
	if(top==-1){
		//printf("valid");
		return 1;
	}
	else{
		//printf("Invalid");
		return 0;
	}
}


