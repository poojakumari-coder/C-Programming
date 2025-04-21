//m to find the greatest among three given numbers. Print number once
//if the greatest number appears two or three times
#include<stdio.h>
int main()
{
	int x,y,z;
	printf("Enter three numbers");
	scanf("%d %d %d",&x,&y,&z);
	
	if(x>y)
	{
		if(x>z)
		{
		printf("%d is greater",x);	
		}
		else
		{
		printf("%d is greater",z);	
		}
	}
		else if(y>x)
		{
			 if(y>z)
			{
				printf("%d is greater,",y);
			}
			else
			{
				printf("%d is greater",z);
			}
		}
		else if(x==y)
		{
			if(y>z)
			{
				printf("%d",y);
			}
			else{
				printf("all are same number: %d",z);
			}
		}
		
	return 0;	 
	}
	
