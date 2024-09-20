#include <stdio.h>

int main()
{
	char c;
	
	printf("Enter the character");
	
	scanf("%c",&c);
	
	if ((c>='A'&& c<='Z') || (c>='a' && c<='z'))
	printf("It is an Alphabet");
	
	else if (c>='0' && c<='9')
	printf("It is a digit");
	
	else
	printf("It is a special character");
	
	return 0;
}
