//a menu driven program with the following options:
//a. Addition
//b. Subtraction
//c. Multiplication
//d. Division
//e. Exit
#include<stdio.h>
int main()
{
	char option;
	int a,b;
	while(1)
	{
	printf("Enter any option from the following:\n");
	printf("A-ADDITION\nB-SUBTRACTION\nC-MULTIPLICATION\nD-DIVISION\nE-EXIT\n");
	fflush(stdin);
	scanf("%c",&option);
	fflush(stdin);
	
	//for exit
        if (option == 'E')
           	return 0;


	printf("Enter any two number:\n");
	scanf("%d %d",&a,&b);
	
	switch(option)
	{
		case 'A':
			printf("Addition of %d and %d is %d\n",a,b,a+b);
			break;
		case 'B':
		   printf("Subtraction of %d and %d is %d\n",a,b,a-b);
		   break;
		case 'C':
			printf("Multiplication of %d and %d is %d\n",a,b,a*b);
		    break;
		case 'D':
			printf("Division of %d and %d is %d\n",a,b,a/b);
		    break;
		default:
			printf("Invalid Input\n");
	}
}
return 0;
	
}
