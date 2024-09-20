#include <stdio.h>

int main()
{
	int a,b,c;
	printf("Enter the three numbers");
	scanf("%d%d%d",&a,&b,&c);
	if (a>b)
	{
		if (a>c)
		{
			printf("%d is the greatest Integer",a);
		}
		else if (a<c)
		{
			printf("%d is the greatest integer",c);
		}
	}
	
	else if (a<b)
	{
		if (a>c)
		{
			printf("%d is the greatest Integer",b);
		}
		
		else if (a<c)
		{
			if (b>c)
			{
			   printf("%d is the greatest Integer",b);
			}
			else if (b<c)
			{
				printf("%d is the greatest Integer",c);
			}
		}
	}
	
	return 0;
}
