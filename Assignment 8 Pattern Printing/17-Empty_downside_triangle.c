#include<stdio.h>
int main()
{
	int i,j;
	
	for(i=0;i<=4;i++)
	{
		for(j=0;j<=8;j++)
		{
			if(j==(0+i) || j==(8-i) || i==0)
			
				printf("*");
				else
				printf(" ");
			
		}
		printf("\n");
	}
}
