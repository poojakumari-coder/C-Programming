//a function to calculate the area of a circle. (TSRS)
#include<stdio.h>
float area(int);

int main()
{
	int r;
	float a;
	printf("Enter the radius of circle: ");
	scanf("%d",&r);
	a=area(r);
	printf("Area of a circle is: %.2f",a);
	return 0;
	
}

float area(int r)
{
	return 3.14*r*r;
}
