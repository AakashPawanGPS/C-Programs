//Reverse without modifying source string

#include<stdio.h> 
#define isAllow(ch) (ch >='0' && ch <= '9' || ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z' ) 

int main() {
    char str[200] , temp; 
//    scanf("%[^\n]s" , str); 
    gets(str);
    int start , end ; 
    for(end = 0 ; str[end] ; end++); 
    end--; 
    start = 0; 
    while(start < end) { 
        while( str[start] && !(isAllow(str[start]))) 
            start++; 
            while( str[end] && !(isAllow(str[end]))) 
                end--; 
                if(start < end) {  
                    temp = str[start]; 
                    str[start] = str[end]; 
                    str[end] = temp; 
                    start++; 
                    end--; 
                } 
    }
    printf("%s " , str); 
    return 0; 
    
}