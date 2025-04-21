//to print the size of int float double
#include<stdio.h>
int main()
{
	int a=sizeof(int);
	int b=sizeof(float);
	int c=sizeof(char);
	int d=sizeof(double);
	printf("Size of all data types are:\n");
	printf("int=%d float=%d char=%d double=%d",a,b,c,d);
	return 0;
	
}
