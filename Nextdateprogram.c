#include <stdio.h>

int main()
{
	int ly=0,d,m,y,testm=1,testd=1;
	
	printf("Enter the date, month and year respectively\n");
	
	scanf("%d%d%d",&d,&m,&y);
// Checking for validity of month	
	if (!(m>=1 && m<=12))
	{
		printf("The month you entered is invalid\n");
		testm=0;
	}
	
// Checking for leap year
	if (y%4==0 && y%100 !=0 || y%400==0)
		ly=1;
		
// Conditional 1: 31 day months
    if (m==1||m==3||m==5||m==7||m==8||m==10)
    {
    	if (d>=1 && d<=30)
    	{
    		d++;
		}
		else if (d==31)
		{
			m++;
			d=1;
		}
		else
		{
			printf("The Date you have entered is Invalid\n");
			testd=0;
		}
	}
// Conditional 2: december month	
	if (m==12)
	{
		if (d>=1 && d<=30)
		{
			d++;
		}
		else if (d==31)
		{
			d=1;
			m=1;
			y++;
		}
		else 
		{
			printf("The Date you have entered is Invalid\n");
			testd=0;
		}
	}
// Conditional 3: 30 day months
    if (m==4||m==6||m==9||m==11)
    {
    	if (d>=1 && d<=29)
    	{
    		d++;
		}
		else if(d==30)
		{
			m++;
			d=1;
		}
		else
		{
			printf("The Date you have entered is Invalid\n");
			testd=0;
		}
	}
//Conditional 4: February month
    if (m==2)
    {
    	if (d>=1 && d<=27)
    	{
    		d++;
		}
		else if (d==28 && ly==1)
		{
			d++;
		}
		else if(d==28 && ly==0)
		{
			m++;
			d=1;
		}
		else if(d==29 && ly==1)
		{
			m++;
			d=1;
		}
		else if (d==29 && ly==0)
		{
			printf("The Date you have entered is Invalid\n");
			testd=0;
		}
		else
		{
			printf("The Date you have entered is Invalid\n");
			testd=0;
		}
	}
	if (testm==1 && testd==1)
	{
		printf("The date of the next day is %d/%d/%d",d,m,y);
	}
	
	return 0;
}
