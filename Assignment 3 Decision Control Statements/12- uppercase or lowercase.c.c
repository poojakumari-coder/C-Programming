//to check whether a given alphabet is in uppercase or lowercase
#include<stdio.h>
int main()
{
	char alpha;
	printf("Enter any Alpahabet: ");
	scanf("%c",&alpha);
	
	if(alpha>=97 && alpha<=122)
	{
		printf("LOWER CASE");
	}
	else if(alpha>=65 && alpha<=90)
	{
		printf("UPPER CASE");
		
	}
	return 0;
}
