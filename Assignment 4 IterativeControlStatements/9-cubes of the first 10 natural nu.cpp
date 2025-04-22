//print cubes of the first 10 natural numbers
#include<stdio.h>
int main()
{
	int i,n;
	printf("How many cubes you want ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		printf("%d\n",i*i*i);
	}
	return 0;
}
