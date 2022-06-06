#include<string.h>
main()
{
	char ch;
	scanf("%c",&ch);
	if(isalpha(ch))
			printf("Alphabet");
	
	else if(isdigit(ch))
			printf("Numeric");
	
	else
		printf("Special Character");
}
