//print cubes of the first N natural numbers
#include<stdio.h>
int main()
{
	int n,i=1;
	printf("Enter number of times:");
	scanf("%d",&n);
	
	while(i<=n)
	{
		printf("%d ",i*i*i);
		i++;
	}
	return 0;
}
