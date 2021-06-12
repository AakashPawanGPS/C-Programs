#include<stdio.h>
int main()
{
   int num, rem = 0, i = 1, res = 0;
   scanf("%d", &num);
   while(num!=0)
   {
       rem = num%6;
       res = (rem*i)+res;
       num = num/6;
       i = i*10;
   }
   printf("%d",res);

}
