#include<stdio.h>
int main()
{
		int i,j,c='A';
	for(i=0;i<=4;i++)
	{
		for(j=0,c='A';j<=(4+i);j++)
		{
			
			if((4-i)<=j)
			{
				printf("%c",c);
				if(j<4)
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
return 0;
}
