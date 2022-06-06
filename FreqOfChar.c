#include<stdio.h>
main()
{
	char ch[100];
	int i,j,c=0;
	scanf("%[^\n]s",ch);
	for(i=0;ch[i]!='\0';i++)
	{
		c=0;
		for(j=0;ch[j]!='\0';j++)
		{
			if(ch[i]==ch[j])
				c++;
			
		}
	}
	printf("%c %d",ch[i],c);
}
