//Write a program to print iNeuron N times on the screen
#include<stdio.h>
int main()
{
	int i=0,n;
	printf("Number of times to print:");
	scanf("%d",&n);
	
	while(i<n)
	{
		printf("ineuron\n");
		i++;
	}
	return 0;
}
