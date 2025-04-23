#include<stdio.h>
int main()
{
	int i,j;
	
	for(i=0;i<=3;i++)
	{ 	printf("\n");
		for(j=0;j<=(3+i);j++)
		{
			if(j>=(3-i))
			printf("*");
			else
			printf(" ");	
		}
		printf("\n");
		}
	
		for(i=0;i<=4;i++)
		{ 	printf("\n");
			for(j=0;j<=8;j++)
			{
				if(0+i<=j && j<=8-i)
				 printf("*");
				 else
				 printf(" ");
			}
			printf("\n");
		}
		
		
	}

