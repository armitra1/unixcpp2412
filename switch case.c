#include<stdio.h>
#include<conio.h>
int main()
{
	int n;
	printf("Enter the alphabet:");
	scanf("%c",&n);
	switch(n)
	{
		case 'A':
			printf("Entered alphabet is A");
			break;
	    case 'B':
	    	printf("Entered alphabet is B");
			break;
	    case 'C':
	    	printf("Entered alphabet is C");
			break;
		case 'Z':
	    	printf("Entered alphabet is Z");
			break;	
		default:
		printf("wrong input."); 
	    
	}
	return 0;
}
