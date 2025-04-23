//to check whether a given number is Prime or not. (TSRS)
#include<stdio.h>
int primecheck(int n)
{
	int i;
	for(i=2;i<n-1;i++)
	{
			if(n%i==0) {
			  break;
			  //printf("not");	
			}
    	     else
    	     {
    	     	//printf("not prime");
			 }
	}

}
int main()
{
	primecheck(7);
}
