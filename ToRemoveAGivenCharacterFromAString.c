#include<stdio.h>
#include<ctype.h>
int main()
{
	int i,j=0,k=0;
	char a[10],b[10],c;
	printf("Enter the String: ");
	gets(a);
	printf("Enter the Character to be Removed:");
	scanf("%c",&c);
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]!=c)
			b[k++]=a[i];
	}
	puts(b);
	return 0;
}


			

	
