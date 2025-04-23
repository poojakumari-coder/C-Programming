#include<stdio.h>
int main()
{
	int i,j;
	char c='A';
	
	for(i=0;i<4;i++)
	{
	     c='A';
		for(j=0;j<7;j++)
		{
			if(j>=(0+i) && j<=(6-i))
			{
				printf("%c",c);
				
				if(j<3)
				  c++;
				else
				  c--;
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
}
