//Remove palindrome

#include<stdio.h> 
#include<stdlib.h> 

int mystrlen(char *str) { 
	int ind; 
	for(ind = 0 ; str[ind] ; ind++); 
	return ind; 
}

int isPalindrome(char *str) { 
	int start , end; 
	for(start = 0 , end = mystrlen(str) - 1 ; start < end ; start++ , end--) { 
		if(abs(str[start] - str[end]) == 32 ) 
			continue; 
		if( str[start] != str[end] ) 
			return 0; 
	} 
	return 1; 
}
	
int main() {
	char str[100]; 
	char *start; 
	int ind; 
	gets(str);
	start = str; 
	for(ind = 0 ; str[ind] ; ind++) { 
		if( str[ind] == 32) { 
			str[ind] = 0; 
			if( isPalindrome(start) == 0) 
				printf("%s " , start); 
			str[ind] = 32; 
			start = str + ind + 1; 
		} 
	}
	if( isPalindrome(start) == 0) 
		printf("%s " , start); 
	
	return 0; 
}
