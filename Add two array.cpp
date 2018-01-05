#include<stdio.h>
int main()
{
 int i,m[5],n[5],c[5];
 //clrscr();
 printf("\nReading the 1st array\n");
 for (i=0;i<5;i++)
   {
   printf("Enter the  value");
   scanf("%d",&m[i]);
   }
 printf("\nReading the 2nd array\n");
 for (i=0;i<5;i++)
   {
   printf("Enter the  value");
   scanf("%d",&n[i]);
   }
   printf("\nThe output of addition of 2 array is\n");
   for(i=0;i<5;i++)
     {
     c[i]=m[i]+n[i];
     printf("\nthe sum of %d & %d is %d",m[i],n[i],c[i]);
     }
return 0;
}
