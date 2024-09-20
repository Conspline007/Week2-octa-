#include <stdio.h>

int main()
{
	int a,b,c;
	printf("Enter the three numbers ");
	scanf("%d%d%d",&a,&b,&c);
	if (a==b && a==c)
	{
		printf("The given three numbers are equal ");
	}	
	else
	{
		printf("The given three numbers are not equal ");
	}
	return 0;
}
