//Write a program to take a three digit number from the user and rotate its digits by
//one position towards the right.
//Write a program to take a three digit number from the user and rotate its digits by
//one position towards the right.

#include<stdio.h>
int main()
{
	int x,temp;
	printf("Enter three digit number");
	scanf("%d",&x);
	temp=x%10;
	x=x/10;
	temp=temp*100;
	temp=temp+x;
	printf("%d",temp);
	return 0;

}
