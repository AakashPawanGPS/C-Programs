//Remove_characters from string

#include<stdio.h>

int main(){
    char s1[200],s2[200];
    int ind1 , ind2;
    scanf("%s%s",s1,s2);
    for(ind2=0;s2[ind2];ind2++){
        for(ind1=0;s1[ind1];ind1++){
            if(s1[ind1] == s2[ind2]){
                s1[ind1] = '@';
            }
        }
    }
    for(ind1=0;s1[ind1] && s1[ind1]!='@';ind1++);
    ind2 = ind1;
//    printf("%d %d",ind1,ind2);

    while(1){
        for(ind2; s1[ind2] && s1[ind2] == '@'; ind2++);
        while(s1[ind2] && s1[ind2] != '@'){
            s1[ind1] = s1[ind2];
            ind1++;
            ind2++;
        }
        if(s1[ind2] == 0) break;
    }
    s1[ind1] = 0;
    printf("%s",s1);

    return 0;
}