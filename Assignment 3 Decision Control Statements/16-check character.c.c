// to check whether a given character is an alphabet (uppercase), an
//alphabet (lower case), a digit or a special character.
#include<stdio.h>
int main()
{
	char alpha;
	printf("Enter any Alpahabet: ");
	scanf("%c",&alpha);
	
	if(alpha>=97 && alpha<=122)
	{
		printf("LOWER CASE ALPHABET");
	}
	else if(alpha>=65 && alpha<=90)
	{
		printf("UPPER CASE ALPHABET");
		
	}
	else if(alpha>=48 && alpha<=57)
	{
		printf("DIGITS");
	}
	else
	{
		printf("SPECIAL CHARACTERS");
	}
	return 0;
}
