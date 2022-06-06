#include<stdio.h>
int main()
{
	char a[10],b[10];
	int i,j,k=0,l=0,c=0;
	printf("Enter String1 & String2:\n");
	gets(a);
	gets(b);
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]==b[i])
			c++;
	}
	for(i=0;a[i]!='\0';i++)
		k++;
	for(i=0;b[i]!='\0';i++)
		l++;
	if(k==c && k==l && l==c)
		printf("Two Strings Are Same");
	else
		printf("Two Strings Are Not Same");
}
