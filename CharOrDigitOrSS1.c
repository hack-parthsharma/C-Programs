#include<string.h>
main()
{
	char ch;
	scanf("%c",&ch);
	if((ch>='a'&& ch<='z')||(ch>='A'&&ch<='Z'))
			printf("Alphabet");
	
	else if(ch>='0' && ch<='9')
			printf("Numeric");
	
	else
		printf("Special Character");
}
