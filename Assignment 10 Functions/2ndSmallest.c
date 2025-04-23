//wap to print the 2nd smallest element of the array
#include<stdio.h>
int main()
{
	int i,max1=-1, max2=-2;
	int num;
	int a[6];
	printf("Enter 6 elements of a array\n");
	for(i=0;i<6;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<6;i++)
	{
		if(a[i]<max1)
		{
			max2=max1;
			max1=a[i];
		}
		else if(max2<a[i])
		{
			max2=a[i];
		}
	}
	
	printf("The second smallest element in the array is %d\n",max2);
	
	return 0;
}
