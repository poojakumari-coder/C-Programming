//a menu driven program with the following options:
//a. Check whether a given set of three numbers are lengths of an isosceles
//triangle or not
//b. Check whether a given set of three numbers are lengths of sides of a right
//angled triangle or not
//c. Check whether a given set of three numbers are equilateral triangle or not
//d. Exit

#include<stdio.h>
#include <stdlib.h>
//void exit (int);
int main()
{
	char choice;
	int a,b,c;
	while(1){
	printf("a-to check for isoscles triangle\nb-to check for right angled triangle\nc-to check for equilateral triangle\nd-exit\n");
	fflush(stdin);
	scanf("%c",&choice);
	fflush(stdin);
	
	if(choice=='d')
	   exit(0);
	
	printf("Enter any three numbers:\n");
	scanf("%d %d %d",&a,&b,&c);
	
	switch(choice)
	{
		case 'a':
			if(a==b || b==c || a==c)
			printf("yes it is isoscles\n");
			else
			printf("no it is not isoscles\n");
			break;
		case 'b':
			if(a*a + b*b == c*c || b*b + c*c == a*a || c*c + a*a == b*b)
			printf("yes it is right angled\n");
			else
			printf("no");
			break;
		case 'c':
		   if(a==b && b==c && c==a)
		   printf("yes it is equilateral\n");
		   else
		   printf("no it is not equilateral\n");
		   break;	
		default :
			printf("invalid\n");
		}	
    } 
}
