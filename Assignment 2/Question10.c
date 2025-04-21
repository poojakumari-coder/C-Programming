/*Write a program to input a number from the user and also input a digit. Append a
digit in the number and print the resulting number*/

//append two numbers.
#include<stdio.h>
int main()
{
	int x,y;
	printf("Enter a number");
	scanf("%d",&x);
	printf("Enter a digit");
	scanf("%d",&y);
	x=x*10;
	x=x+y;
	printf("After append number with a digit is:%d",x);
	return 0;
}
