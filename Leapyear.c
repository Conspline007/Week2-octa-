


#include <stdio.h>

int main()
{
	int ly=0,y;
	printf("enter the year");
	scanf("%d",&y);
	// Checking for leap year
	if (y%4==0 && y%100 !=0 || y%400==0)
		ly=1;
		
	if (ly==1)
		printf("This is a leap year");
	else
		printf("This is not a leap year");
		
	return 0;
}
