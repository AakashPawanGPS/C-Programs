#include<stdio.h>
main()
{
int petrol,i,dis[100],capacity[100];
char bunks[100];
printf("\t*****Input*****\n");
printf("\tPetrol in car:");
scanf("%d",&petrol);
printf("\tPetrol bunks:\n\t");
 for(i=0;i<3;i++)
  scanf("\n%c",&bunks[i]);
 printf("\tDistance from petrol each petrol bunks:\n\t");
 for(i=0;i<3;i++)
  scanf("%d",&dis[i]);
 printf("\tCapacities of each petrol bunk:\n\t");
 for(i=0;i<3;i++)
  scanf("%d",&capacity[i]);
 printf("\n\t*****Output*****\n");
 for(i=0;i<3;i++)
 {
  if(petrol>0)
  {
   petrol=petrol-dis[i];
   petrol=capacity[i]+petrol;
  }
  else
  {
   printf("\t\tsorry....!!!no petrol....!!!\n");
  }
 }
 printf("\tRemaining petrol in car is %d liters\n",petrol);
} 