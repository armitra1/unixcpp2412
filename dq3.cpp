#include<stdio.h> 
#include<conio.h>   
   int main() 
    { 
     int arr[5],i; 
     int *p=arr; 
     printf("Enter five numbers separated by space:"); 
     scanf("%d%d%d%d%d",p,p+1,p+2,p+3,p+4); 
     printf("Your numbers are:\n"); 
     for(i=0;i<5;i++) 
        printf("%d\n",arr[i]);      
     getch(); 
     return 0;   
    } 
