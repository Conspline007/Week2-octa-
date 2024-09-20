#include <stdio.h>

int main()
{
	int ly=0,m,y,days;
	
	printf("Enter the month and year respectively\n");
	
	scanf("%d%d",&m,&y);
	
// Checking for validity of month
	
	if (!(m>=1 && m<=12))
	{
		printf("The month you entered is invalid\n");
	}
	
// Checking for leap year

	if (y%4==0 && y%100 !=0 || y%400==0)
		ly=1;

    if (m==1||m==3||m==5||m==7||m==8||m==10||m==12)
    {
    	days = 31;
		printf("%d is the number of days in given month",days);
	}
	else if (m==4||m==6||m==9||m==11)
	{
		days=30;
		printf("%d is the number of days in given month",days);
	}
	else if (m==2 && ly==1)
	{
		days=29;
		printf("%d is the number of days in given month",days);
	}
	else if( m==2 && ly==0)
	{
		days=28;
		printf("%d is the number of days in given month",days);
	}
	
}
