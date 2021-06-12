#include<stdio.h>
#include<string.h>

int main(){
	
	char str[100];
	char sub[100];
	
	scanf("%s%s",&str,&sub);
	
	int i=0,j,l1,l2;
	l1=strlen(str);
	l2=strlen(sub);
	
	if(l2>l1){
		printf("-1");
	}
	else{
		while(str[i]){
			if(str[i]==sub[0]){
				i++;
				j=1;
				while(str[i]&&sub[j]&&str[i]==sub[j]){
					i++;
					j++;
				}
				if(str[i]==0 || sub[j]==0){
					break;
				}
			}
			else{
				i++;
			}
		}
	}
	if(sub[j]==0){
		printf("%d",i-l2);
	}
	else{
		printf("-1");
	}
	return 0;
}
