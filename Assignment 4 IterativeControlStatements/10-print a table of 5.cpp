//Write a program to print a table of 5
#include<stdio.h>
int main()
{
	int i,n;
	printf("ENTER A NUMBER FOR ITS TABLE ");
	scanf("%d",&n);
	
	for(i=1;i<=10;i++)
	{
		printf("%dx%d=%d\n",n,i,n*i);
	}
	return 0;
}
