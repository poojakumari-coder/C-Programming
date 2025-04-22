// print N Prime numbers

#include<stdio.h>
int main()
{
	int x=2,i,n;
	printf("Enter a number:");
	scanf("%d",&n);
	
	while(n)
	{
		for(i=2;i<x;i++)
	      if(x%i==0)
		     break;
		
		if(i==x) 
		{
		
		  printf("%d ",x);
		  n--;
      	}
	    x++;
	}
	return 0;
	
}
