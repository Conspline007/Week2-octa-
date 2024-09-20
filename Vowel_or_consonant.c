#include <stdio.h>

int main()
{
	char c;
	printf("Enter the Alphabet ");
    scanf("%c",&c);
    
    if (!((c>='A'&& c<='Z') || (c>='a' && c<='z')))
	printf("It is not an Alphabet \nplease try again");
	
	else if (c=='A'||c=='E'||c=='I'||c=='O'||c=='U'||c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
	printf("It is a vowel");
	else
	printf("It is a consonant");
	return 0;
}
