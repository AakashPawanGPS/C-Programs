//Nearest_prime_Palindrome

#include<stdio.h>

int palindrome(int n){
    int temp=n;
    int s=0,r;
    while(n>0){
        r=n%10;
        s=(s*10)+r;
        n=n/10;
    }
    if(temp==s){
        return 1;
    }
    else return 0;

}

int prime(int n){
    for(int i=2;i<n/2;i++){
        if(n%i==0)  return 0;
    }
    return 1;
}

int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);

    int l,h,t=1;
    l=h=n;

    while(t){
        if(palindrome(h) && prime(h)){
            printf("%d",h);
            break;
        }

        if(palindrome(l) && prime(l)){
            printf("%d",l);
            break;
        }
        l--;
        h++;
    }
    return 0;
}



// #include <stdio.h>
// #include <math.h>

// int pali(int n)
// {
//     int f = 1, t = n, s = 0, q;
//     while (n)
//     {
//         q = n % 10;
//         s = (s * 10) + q;
//         n = n / 10;
//     }
//     if (t != s)
//         return 0;
//     else
//         return 1;
// }

// int prime(int n)
// {
//     int f = sqrt(n);int i;
//     for (i = 2; i <= f; i++)
//     {
//         if (n % i == 0)
//             return 0;
//     }
//     return 1;
// }

// int main()
// {
//     int n, h, l;
//     printf("Enter the Number : ");
//     scanf("%d", &n);
//     l = h = n;
//     while (1)
//     {
//         if (pali(h) && prime(h))
//         {
//             printf("%d", h);
//             break;
//         }
//         if (pali(l) && prime(l))
//         {
//             printf("%d", l);
//             break;
//         }
//         h++;
//         l--;
//     }
//     return 0;
// }