#include <stdio.h>

int main()
{
	char c;
	
	printf("Enter the character ");
	
	scanf("%c",&c);
	
	if (c>='A'&& c<='Z')
	printf("It is uppercase");
	
	else if (c>='a' && c<='z')
	printf("It is lowercase");
	
	else
	printf("This is not an alphabet");
	

	

	
	return 0;
}
