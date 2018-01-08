
#include<stdio.h>
#include<conio.h>

int forfn(int i)
{
    for(i=1;i<=3;i++)
    {
        printf("2 * %d = %d",i,(2*i));
        printf("\n");
    }
}
int whilefn(int i)
{
    i=1;
    while(i<=3)
    {
        printf("2 * %d = %d",i,(2*i));
         printf("\n");
        i++;
        
    }
}
int dowhilefn(int i)
{
    i=1;
    do
    {
      printf("2 * %d = %d",i,(2*i));
       printf("\n");
      i++;
    }while(i<=3);
} 
int main() {
	int i;
  	forfn(i);
  	whilefn(i);
  	dowhilefn(i);
  	return 0;
}


