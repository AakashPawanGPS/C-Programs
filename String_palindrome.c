//String_palindrome

#include<stdio.h>
#include<string.h>

int main()
{
    char str[100];
    int i,l,f=1;

    printf("Enter the string : ");
    scanf("%s",str);

    for(l=0;str[l];l++);

    for(i=0;i<l/2;i++){
        if(str[i]!=str[l-i-1]) 
        {
            f=0;
            break;
        }
    }
    if(f) {printf("Palindrome");}
    else {printf("not");}

    return 0;
}