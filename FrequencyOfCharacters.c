#include<stdio.h>
int main()
{
	char s[20],a[20];
	int i,j,k;
	printf("Enter the String:");
	gets(s);
	for(i=0;s[i]!='\0';i++)
	{
		k=0;
		for(j=0;s[j]!='\0';j++)
		{
			if(s[i]==s[j])
				k++;
		}
		a[i]=k;
	}
	for(i=0;s[i]!='\0';i++)
	{
		printf("%d ",a[i]);
	}
	
}
