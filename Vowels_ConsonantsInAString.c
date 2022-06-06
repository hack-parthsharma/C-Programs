#include<stdio.h>
main()
{
	char ch[100];
	int i,j;
	scanf("%[^\n]s",ch);
	printf("Vowels Are:");
	for(i=0;ch[i]!='\0';i++)
	{
		if(ch[i]=='a'||ch[i]=='e'||ch[i]=='i'||ch[i]=='o'||ch[i]=='u'||ch[i]=='A'||ch[i]=='E'||ch[i]=='I'||ch[i]=='O'||ch[i]=='U')
			printf("%c ",ch[i]);
	}
	printf("\nConsonants Are:");
	for(j=0;ch[j]!='\0';j++)
	{
		if(ch[j]!='a'&&ch[j]!='e'&&ch[j]!='i'&&ch[j]!='o'&&ch[j]!='u'&&ch[j]!='A'&&ch[j]!='E'&&ch[j]!='I'&&ch[j]!='O'&&ch[j]!='U')
			printf("%c ",ch[j]);
	}
}
	
