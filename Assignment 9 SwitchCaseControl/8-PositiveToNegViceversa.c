//rogram to convert a positive number into a negative number and negative number
//into a positive number using a switch statement
#include<stdio.h>
int main()
{
	int a;
	printf("Enter any number:");
	scanf("%d",&a);
	
	switch(a>0)
	{
		case 0:
			printf("Positive of this :%d",-a);
			break;
		case 1:
		    printf("Negative of this :%d",-a);	
	    	break;
	}
	return 0;
}
