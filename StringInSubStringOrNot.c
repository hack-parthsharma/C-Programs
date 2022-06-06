#include<stdio.h>
main()
{
	char str[100],substr[100],n;
	int i,j,c=0;
	scanf("%[^\n]s",str);
	scanf("%[^\n]s",substr);
	if(substring(str,substr))
		printf("Found");
	else
		printf("Not Found");
	int substring(char str,char substr)
	{
		int i,len1,len2;
		len1=strlen(str);
		len2=strlen(substr);
		for(i=0;str[i]!='\0';i++)
		{
			if(str[i]==substr[0])
			{
				
			}
		}
			
	}
		
