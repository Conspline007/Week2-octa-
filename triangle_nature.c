#include <stdio.h>

int main()
{
	int a,b,c;
	printf("Enter the lengths of three sides of a triangle");
	scanf("%d%d%d",&a,&b,&c);
	if (a==b && a==c)
	{
		printf("The given triangle is equilateral ");
	}
	else if (a==b || a==c || b==c)
	{
		printf("the given triangle is isoceles");
	}
	else
	{
		printf("The given triangle is Scalene")
	}
	
	
	
	
	
	return 0;
}
