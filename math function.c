#include<math.h>
#include<stdio.h>
#include<conio.h>
int main()
{
	int a,e,x,f,g;
	float b,d;
	printf("Enter a Integer: ");
	scanf("%d",&a);
	printf("\nEnter a decimal number: ");
	scanf("%f",&b);
	printf("\nEnter the Power: ");
	scanf("%d",&x);
	d=sqrt(a);
	printf("\nSquare Root of %d is %f",a,d);
	e=pow(a,x);
	printf("\nPower of %d is %d",a,e);
	f=ceil(b);
	printf("\nCeiling of %f is %d",b,f);
	g=floor(b);
	printf("\nFloor of %f is %d",b,g);
	return 0;
	
}

