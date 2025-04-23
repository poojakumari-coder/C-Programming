//rogram to Convert even number into its upper nearest odd number Switch
//Statement
#include<stdio.h>
int main()
{
	int n;
	printf("Enter any even number:");
	scanf("%d",&n);
	
	switch(n%2==0)
	{
		case 0:
			printf("Odd number is:%d",n);
			break;
		case 1:
		    printf("Next Odd Number is :%d",n+1);
		    break;
		
	}
	return 0;
}
