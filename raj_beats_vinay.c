#include <stdio.h>

int main()
{
	int a,b,c;
	printf("Enter the points of three bowling techniques respectively");
	scanf("%d%d%d",&a,&b,&c);
	if (a>b)
	{
		if (a>c)
		{
			printf("Technique 1 (%d points) is the best",a);
		}
		else if (a<c)
		{
			printf("Technique 3 (%d points) is the best",c);
		}
	}
	
	else if (a<b)
	{
		if (a>c)
		{
			printf("Technique 2 (%d) is the best",b);
		}
		
		else if (a<c)
		{
			if (b>c)
			{
			   printf("Technique 2 (%d) is the best",b);
			}
			else if (b<c)
			{
				printf("Technique 3 (%d points) is the best",c);
			}
		}
	}
	
	return 0;
}
